/*
 * ============================================================================
 *  ŞU AN KULLANILMIYOR — derlemeye dahil degil.
 *
 *  Gezinme artik screens/main_screen.xml icindeki kaydirmali sayfalayici ile
 *  yapiliyor (scroll_snap_x/y + scroll_one), yani saf XML. Bu dosya, alti
 *  ayri ekrani lv_screen_load_anim() ile degistiren eski kurgu icindi ve
 *  artik var olmayan *_create() fonksiyonlarina bakiyor.
 *
 *  Silinmedi: ayri ekranli modele donulmek istenirse baslangic noktasi.
 *  Ayrintilar icin NAVIGATION.md -> "Ayri ekranlara donmek isterseniz".
 * ============================================================================
 *
 * nav_gestures.c — HTML demosundaki ekran gecislerinin LVGL karsiligi.
 *
 * XML tarafindaki <screen_load_event> etiketleri "dokunma" ile calisir
 * (etikete, sayfa noktalarina, ipucu satirina...). Yon bilgisi tasiyan gercek
 * kaydirma jestleri XML ile ifade edilemedigi icin bu dosya devreye girer:
 * ekranlari 3 sutun x 2 satirlik bir izgara olarak tutar ve kaydirma yonune
 * gore dogru animasyonla gecis yapar.
 *
 *      sutun 0        sutun 1          sutun 2
 *  ┌──────────────┬────────────────┬──────────────────┐
 *  │ 01 home_main │ 03 weather_    │ 05 wifi_list     │  satir 0
 *  │              │    hourly      │                  │
 *  ├──────────────┼────────────────┼──────────────────┤
 *  │ 02 clock_    │ 04 weather_    │ 06 wifi_password │  satir 1
 *  │    full      │    daily       │                  │
 *  └──────────────┴────────────────┴──────────────────┘
 *
 *  sola kaydirma  -> sagdaki sutun (MOVE_LEFT)
 *  saga kaydirma  -> soldaki sutun (MOVE_RIGHT)
 *  yukari kaydirma-> alttaki satir (MOVE_TOP)
 *  asagi kaydirma -> ustteki satir (MOVE_BOTTOM)
 *
 * Kullanim: LVGL ve ekranlar hazir olduktan sonra main.c icinden nav_init();
 */

#include "lvgl.h"

/* LVGL Editor export'u her ekran icin <dosya_adi>_create() uretir. */
lv_obj_t * home_main_create(void);
lv_obj_t * clock_full_create(void);
lv_obj_t * weather_hourly_create(void);
lv_obj_t * weather_daily_create(void);
lv_obj_t * wifi_list_create(void);
lv_obj_t * wifi_password_create(void);

/* HTML demosundaki .52s gecis suresiyle ayni hissi verir. */
#define NAV_ANIM_MS 500

typedef enum {
    SCR_HOME = 0, SCR_HOURLY, SCR_WIFI,
    SCR_CLOCK,    SCR_DAILY,  SCR_WIFI_PW,
    SCR_COUNT
} scr_id_t;

static const scr_id_t nav_grid[2][3] = {
    { SCR_HOME,  SCR_HOURLY, SCR_WIFI    },   /* satir 0 */
    { SCR_CLOCK, SCR_DAILY,  SCR_WIFI_PW },   /* satir 1 */
};

static lv_obj_t * screens[SCR_COUNT];
static uint8_t cur_row, cur_col;

static void nav_gesture_cb(lv_event_t * e);

static lv_obj_t * screen_get(scr_id_t id)
{
    if(screens[id] != NULL) return screens[id];

    switch(id) {
        case SCR_HOME:    screens[id] = home_main_create();      break;
        case SCR_HOURLY:  screens[id] = weather_hourly_create(); break;
        case SCR_WIFI:    screens[id] = wifi_list_create();      break;
        case SCR_CLOCK:   screens[id] = clock_full_create();     break;
        case SCR_DAILY:   screens[id] = weather_daily_create();  break;
        case SCR_WIFI_PW: screens[id] = wifi_password_create();  break;
        default: return NULL;
    }

    /* Ekran bir kez olusturulur ve bellekte kalir -> durum korunur
       (kaydirma konumu, girilen parola, klavye modu...). */
    lv_obj_add_event_cb(screens[id], nav_gesture_cb, LV_EVENT_GESTURE, NULL);
    return screens[id];
}

static void nav_to(uint8_t row, uint8_t col, lv_screen_load_anim_t anim)
{
    if(row > 1 || col > 2) return;
    if(row == cur_row && col == cur_col) return;

    cur_row = row;
    cur_col = col;
    lv_screen_load_anim(screen_get(nav_grid[row][col]), anim, NAV_ANIM_MS, 0, false);
}

static void nav_gesture_cb(lv_event_t * e)
{
    LV_UNUSED(e);

    lv_indev_t * indev = lv_indev_active();
    if(indev == NULL) return;

    lv_dir_t dir = lv_indev_get_gesture_dir(indev);

    /* Kaydirma bittikten sonra ayni dokunusun tiklama olarak da islenmesini
       engeller; yoksa jest hem gecis yapar hem XML olayini tetikler. */
    lv_indev_wait_release(indev);

    switch(dir) {
        case LV_DIR_LEFT:
            if(cur_col < 2) nav_to(cur_row, cur_col + 1, LV_SCR_LOAD_ANIM_MOVE_LEFT);
            break;
        case LV_DIR_RIGHT:
            if(cur_col > 0) nav_to(cur_row, cur_col - 1, LV_SCR_LOAD_ANIM_MOVE_RIGHT);
            break;
        case LV_DIR_TOP:
            if(cur_row < 1) nav_to(cur_row + 1, cur_col, LV_SCR_LOAD_ANIM_MOVE_TOP);
            break;
        case LV_DIR_BOTTOM:
            if(cur_row > 0) nav_to(cur_row - 1, cur_col, LV_SCR_LOAD_ANIM_MOVE_BOTTOM);
            break;
        default:
            break;
    }
}

void nav_init(void)
{
    for(int i = 0; i < SCR_COUNT; i++) screens[i] = NULL;

    cur_row = 0;
    cur_col = 0;
    lv_screen_load(screen_get(SCR_HOME));
}

/*
 * NOT — kaydirilabilir alanlar jesti yutar.
 *
 * weather_hourly ekranindaki saatlik kart seridi yatay kaydirilabilir oldugu
 * icin, serit uzerinde yapilan yatay kaydirmalar sayfa degistirmez; serit
 * kayar. Serit uzerinden de sayfa degistirmek istersen jesti ust nesneye
 * ilet:
 *
 *     lv_obj_t * strip = lv_obj_get_child_by_name(scr, "hour_strip");
 *     lv_obj_add_flag(strip, LV_OBJ_FLAG_GESTURE_BUBBLE);
 *
 * Tersine, seridin kendi kaydirmasini korumak istiyorsan bu satiri ekleme.
 */
