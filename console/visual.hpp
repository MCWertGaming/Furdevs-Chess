#pragma once
#include <cstdint>

namespace Visual {
    // helper for printing
    void print();

    void animate_title_screen(uint8_t start_x, uint8_t start_y, uint32_t time_ms);

    void animate_title_main_menu(uint8_t start_x, uint8_t start_y, uint32_t time_ms);

    void animate_main_title(uint8_t start_x, uint8_t start_y, uint32_t time_ms);

    void animate_main_to_about(uint8_t start_x, uint8_t start_y, uint32_t time_ms);

    void animate_about_to_main(uint8_t start_x, uint8_t start_y, uint32_t time_ms);

    void animate_main_to_help(uint8_t start_x, uint8_t start_y, uint32_t time_ms);
    void animate_help_to_main(uint8_t start_x, uint8_t start_y, uint32_t time_ms);

    void draw_main_menu(uint8_t start_x, uint8_t start_y, uint32_t time_ms);

    void draw_coming_soon_online(uint8_t start_x, uint8_t start_y);
}
