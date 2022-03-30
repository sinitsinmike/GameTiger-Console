#include "common.h"

Image font = Image(font_img_width, font_img_height, font_color_count, (uint8_t*)font_palette, (uint8_t*)font_pixel_data, font_sprite_data);
Image font2 = Image(font2_img_width, font2_img_height, font2_color_count, (uint8_t*)font2_palette, (uint8_t*)font2_pixel_data, font2_sprite_data);
Image menuItemLogo[6] = {
    Image(snake_img_width, snake_img_height, snake_color_count, (uint8_t*)snake_palette, (uint8_t*)snake_pixel_data),
    Image(g2048_img_width, g2048_img_height, g2048_color_count, (uint8_t*)g2048_palette, (uint8_t*)g2048_pixel_data),
    Image(tetris_img_width, tetris_img_height, tetris_color_count, (uint8_t*)tetris_palette, (uint8_t*)tetris_pixel_data),
    Image(mine_img_width, mine_img_height, mine_color_count, (uint8_t*)mine_palette, (uint8_t*)mine_pixel_data),
    Image(settings_img_width, settings_img_height, settings_color_count, (uint8_t*)settings_palette, (uint8_t*)settings_pixel_data),
    Image(about_img_width, about_img_height, about_color_count, (uint8_t*)about_palette, (uint8_t*)about_pixel_data),
};
Image gameOver = Image(gameover_img_width, gameover_img_height, gameover_color_count, (uint8_t*)gameover_palette, (uint8_t*)gameover_pixel_data);
Image tiger = Image(tiger_img_width, tiger_img_height, tiger_color_count, (uint8_t*)tiger_palette, (uint8_t*)tiger_pixel_data);
Image sweeper = Image(sweeper_img_width, sweeper_img_height, sweeper_color_count, (uint8_t*)sweeper_palette, (uint8_t*)sweeper_pixel_data, sweeper_sprite_data);

timetype getTime() {
    timetype now;
#ifdef FORMPU
    now = to_ms_since_boot(get_absolute_time());
#else
    now = Clock::now();
#endif
    // printf("Time: %d\n", now);
    return now;
}

uint16_t getTimeDiffMS(timetype start) {
    timetype end = getTime();
    uint16_t timeDiffMS = 0;
#ifdef FORMPU
    timeDiffMS = (end - start);
#else
    milliseconds ms = std::chrono::duration_cast<milliseconds>(end - start);
    timeDiffMS = ms.count();
#endif
    // printf("Time diff: %d\n", timeDiffMS);
    return timeDiffMS;
}
