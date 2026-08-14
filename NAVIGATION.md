# Ekranlar, geçişler ve kurulum

800×480 akıllı ekranın 6 arayüzü LVGL 9.5 XML olarak burada. Geçiş modeli
`demo.html` ile birebir aynı.

## Ekran haritası

```
        sütun 0            sütun 1               sütun 2
      ┌────────────────┬─────────────────────┬────────────────────┐
sat.0 │ 01 home_main   │ 03 weather_hourly   │ 05 wifi_list       │
      ├────────────────┼─────────────────────┼────────────────────┤
sat.1 │ 02 clock_full  │ 04 weather_daily    │ 06 wifi_password   │
      └────────────────┴─────────────────────┴────────────────────┘
```

Yatay hareket = sayfa değiştirme, dikey hareket = sayfa içi derinlik.
**Wi-Fi kurulumu, 03'ten sola kaydırınca gelir.**

## Nasıl çalışıyor: tek ekran, iki sayfalayıcı

Gezinme dokunmayla değil, **parmakla kaydırarak** olur. LVGL'de bunun için
ayrı bir jest widget'ı yoktur; kaydırmanın kendisi sayfalamaya dönüştürülür:
bir kabın içeriği kendisinden büyük olunca kap kaydırılabilir hale gelir,
*snap* de bırakınca en yakın sayfaya oturtur.

```
screens/main_screen.xml
└── view              yatay,  scroll_snap_x="center", scroll_one="true"
    ├── col_home      dikey,  scroll_snap_y="center", scroll_one="true"
    │   ├── home_main       (800×480)
    │   └── clock_full
    ├── col_weather
    │   ├── weather_hourly
    │   └── weather_daily
    └── col_wifi
        ├── wifi_list
        └── wifi_password
```

Altı sayfa artık ayrı ekran değil, `components/` altındaki birer bileşen;
hepsi bu tek ekranın içinde yaşar.

| Öznitelik | Ne yapar |
|---|---|
| `scroll_snap_x` / `scroll_snap_y` | Bırakınca en yakın sayfaya oturtur |
| `scroll_one="true"` | **Bir jest = bir sayfa**, ne kadar sert savrulursa savrulsun |
| `scroll_elastic="false"` | Kenarda lastik efekti yok, cihaz hissi net |
| `scrollbar_mode="off"` | Kaydırma çubuğu görünmez |
| `scroll_chain_hor="false"` | Saatlik şerit, sonuna gelince sayfayı sürüklemez |

**Kritik kural:** sayfalar tam 800×480 olmalı ve kaplarda dolgu/boşluk/kenarlık
sıfır olmalı. Aksi halde sayfalar 800'ün katlarına denk gelmez, hizalama kayar.

Bu model tamamen XML'dir: C dosyası, `user_config.cmake` kaydı ve Ctrl+B build
gerektirmez, Live Preview'de doğrudan çalışır.

### Dokunmayla geçişler neden kaldırıldı?

`<screen_load_event>` yalnızca `clicked` gibi olaylarla çalışır ve **yön
bilgisi taşımaz** — `trigger="gesture"` yazsanız bile hangi yöne kaydırdığınız
bilinmez, dolayısıyla üç çıkışı olan `weather_hourly` gibi bir sayfada geçiş
haritası kurulamaz. Kaydırma modeline geçince ayrı ekran kalmadığı için
12 `<screen_load_event>` etiketinin tamamı silindi.

Sayfa göstergesi noktaları duruyor ama artık tıklanabilir değil; yalnızca
hangi sayfada olduğunuzu gösteriyorlar.

### Kaybolan tek davranış

`wifi_list` → `wifi_password` geçişi eskiden ağ satırına **dokunmakla**
oluyordu; şimdi **aşağı kaydırmakla** oluyor. Dokunarak detaya inme istenirse
o tek geçiş için C gerekir (aşağıdaki nota bakın).

## Tasarımın LVGL widget karşılıkları

| Tasarım öğesi | LVGL widget | Not |
|---|---|---|
| Sıcaklık/nem yay göstergesi | `lv_arc` | `bg_start_angle=135`, `bg_end_angle=45` → 270°, altta boşluk. Tutamak gizli |
| Saniye çubuğu | `lv_bar` | `clock_second` subject'ine bağlı, 0–59 |
| 5 günlük sıcaklık aralığı | `lv_bar` **RANGE** modu | `start_value`=düşük, `value`=yüksek — tam da bu iş için |
| Aralık çubuğu gradyanı | `bg_grad_color` + `bg_grad_dir="hor"` | camgöbeği → amber |
| Wi-Fi aç/kapa | `lv_switch` | `bind_checked="wifi_enabled"` |
| Parola alanı | `lv_textarea` | `password_mode="true"`, `one_line="true"` |
| Ekran klavyesi | `lv_keyboard` | Elle çizilen 40 tuş yerine hazır widget; tuşlar `LV_PART_ITEMS` ile boyandı |
| Saatlik kart şeridi | `lv_obj` + flex | İçerik ekrandan geniş → LVGL kendiliğinden yatay kaydırılabilir yapar |
| Hava ikonları | `lv_image` | PNG, `images/` içinde üretildi |
| Tek renkli arayüz ikonları | `lv_image` + `image_recolor` | Beyaz üretilip token rengine boyanır — tek dosya, çok renk |

## Kurulumdan önce yapılacak iki şey

**1. Font dosyaları.** `globals.xml` bu TTF'leri bekliyor, `fonts/` klasörüne
koyman gerek:

- `Fraunces-Black.ttf`, `Fraunces-SemiBold.ttf` — [Google Fonts](https://fonts.google.com/specimen/Fraunces)
- `IBMPlexMono-SemiBold.ttf`, `IBMPlexMono-Medium.ttf` — [Google Fonts](https://fonts.google.com/specimen/IBM+Plex+Mono)

Türkçe karakterler için font aralıkları `0x20-0x7F,0xC0-0xFF,0x11E-0x11F,0x130-0x131,0x15E-0x15F`
olarak ayarlandı (ğĞ, ıİ, şŞ, çÇ, öÖ, üÜ). Dev saat rakamları (232 px, 142 px)
yalnızca `0x30-0x3A` aralığıyla üretilir — tüm alfabe yerine 12 glif gömüldüğü
için flash maliyeti küçük kalır.

**2. Klavye–parola alanı bağlantısı.** Tek bir `lv_textarea` olduğu için LVGL'in
varsayılan odak grubu genelde yeterli. Kesin bağlamak istersen:

```c
lv_obj_t * ta = lv_obj_get_child_by_name(scr, "password");
lv_obj_t * kb = lv_obj_get_child_by_name(scr, "keyboard");
lv_keyboard_set_textarea(kb, ta);
```

## Canlı veriyi bağlama

Değerler `globals.xml` içindeki subject'lerden gelir; C tarafından güncellenince
ekranlar kendiliğinden yenilenir:

```c
lv_subject_set_string(&clock_time_subject, "17:14");
lv_subject_set_int(&clock_second_subject, 38);
lv_subject_set_int(&room_hum_subject, 48);
```

Yay göstergelerinin sayısal değeri için (subject'e bağlı değil, prop ile veriliyor):

```c
lv_obj_t * dial = lv_obj_get_child_by_name(scr, "gauge_temp/dial");
lv_arc_set_value(dial, 224);        /* 22.4 °C — ölçek 0..400 = 0..40 °C */
```

## Bilinçli sapmalar

- **BAĞLAN tuşunun yeri.** Tasarımda klavyenin son satırındaydı; burada parola
  satırının sağında. Sebebi: `lv_keyboard` kendi tuş haritasıyla gelir. Birebir
  aynı satırı istiyorsan `lv_buttonmatrix` ile özel bir keymap tanımlaman
  gerekir — o zaman klavyeyi elle kurmuş olursun ve widget'ın büyük/küçük harf,
  backspace davranışını da kendin yazarsın.
- **Sayfa noktaları üçe çıktı.** Wi-Fi üçüncü sayfa olduğu için gösterge de üç
  noktaya güncellendi.
- Sürüm notu: dosyalar `project.xml` içindeki **LVGL 9.5.0** hedefine göre
  yazıldı. Farklı bir sürümde `style_*-part` ek soneki ve `bind_*` adları
  değişebilir; Editör'de hatalar bunları işaret eder.

## Ayrı ekranlara dönmek isterseniz

`nav_gestures.c` bu modelde **kullanılmıyor** — altı ayrı ekranı
`lv_screen_load_anim()` ile değiştiren eski kurgu için yazılmıştı. Dosya
silinmedi; ileride sayfalayıcı yerine ayrı ekranlar istenirse başlangıç
noktası olarak durur.

O yola dönmek, kaydırma davranışını kaybetmek pahasına geçiş animasyonunun
tipini ve süresini tam kontrol etmenizi sağlar. Gerekenler: sayfaları tekrar
`<screen permanent="true">` yapmak, her birine
`<event_cb callback="nav_gesture" trigger="gesture" user_data="satır sütun"/>`
eklemek, `nav_gestures.c` içinde yönü `lv_indev_get_gesture_dir()` ile okuyup
`lv_screen_load_anim()` çağırmak ve dosyayı `user_config.cmake`'e kaydetmek.
Bu yol C ve Ctrl+B build gerektirir.
