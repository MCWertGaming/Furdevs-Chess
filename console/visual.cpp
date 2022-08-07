#include "visual.hpp"
#include <foxspace/time.hpp>
#include <cpp-terminal/base.hpp>
#include <iostream>

void Visual::animate_title_screen(uint8_t start_x, uint8_t start_y, uint32_t time_ms) {
    uint32_t frame_time = time_ms / 33;
    // 1
    std::cout << Term::move_cursor(start_x, start_y +1) << "──"
            << Term::move_cursor(start_x +1, start_y+23) << "│"
            << Term::move_cursor(start_x +10, start_y) << "│"
    << Term::move_cursor(start_x+11, start_y+21) << "──"
            << std::flush;

    // 2
    Fox::sleep_for(frame_time);
    std::cout << Term::move_cursor(start_x, start_y) << " ────"
            << Term::move_cursor(start_x+1, start_y) << "                       │"
            << Term::move_cursor(start_x+2, start_y) << "                       │"
            << Term::move_cursor(start_x+9, start_y) << "│"
            << Term::move_cursor(start_x+10, start_y) << "│"
            << Term::move_cursor(start_x+11, start_y) << "                   ────"
            << std::flush;

    // 3
    Fox::sleep_for(frame_time);
    std::cout << Term::move_cursor(start_x, start_y) << " ──────"
            << Term::move_cursor(start_x+1, start_y) << "                       │"
            << Term::move_cursor(start_x+2, start_y) << "                       │"
            << Term::move_cursor(start_x+3, start_y) << "                       │"
            << Term::move_cursor(start_x+4, start_y) << ""
            << Term::move_cursor(start_x+5, start_y) << ""
            << Term::move_cursor(start_x+6, start_y) << ""
            << Term::move_cursor(start_x+7, start_y) << ""
            << Term::move_cursor(start_x+8, start_y) << "│"
            << Term::move_cursor(start_x+9, start_y) << "│"
            << Term::move_cursor(start_x+10, start_y) << "│"
            << Term::move_cursor(start_x+11, start_y) << "                 ──────"
            << std::flush;

    // 4
    Fox::sleep_for(frame_time);
    std::cout << Term::move_cursor(start_x, start_y) << " ────────"
              << Term::move_cursor(start_x+1, start_y) << "                       │"
              << Term::move_cursor(start_x+2, start_y) << "                       │"
              << Term::move_cursor(start_x+3, start_y) << "                       │"
              << Term::move_cursor(start_x+4, start_y) << "                       │"
              << Term::move_cursor(start_x+5, start_y) << ""
              << Term::move_cursor(start_x+6, start_y) << ""
              << Term::move_cursor(start_x+7, start_y) << "│"
              << Term::move_cursor(start_x+8, start_y) << "│"
              << Term::move_cursor(start_x+9, start_y) << "│"
              << Term::move_cursor(start_x+10, start_y) << "│"
              << Term::move_cursor(start_x+11, start_y) << "               ────────"
              << std::flush;
    // 5
    Fox::sleep_for(frame_time);
    std::cout << Term::move_cursor(start_x, start_y) << " ──────────"
              << Term::move_cursor(start_x+1, start_y) << "                       │"
              << Term::move_cursor(start_x+2, start_y) << "                       │"
              << Term::move_cursor(start_x+3, start_y) << "                       │"
              << Term::move_cursor(start_x+4, start_y) << "                       │"
              << Term::move_cursor(start_x+5, start_y) << "                       │"
              << Term::move_cursor(start_x+6, start_y) << "│"
              << Term::move_cursor(start_x+7, start_y) << "│"
              << Term::move_cursor(start_x+8, start_y) << "│"
              << Term::move_cursor(start_x+9, start_y) << "│"
              << Term::move_cursor(start_x+10, start_y) << "│"
              << Term::move_cursor(start_x+11, start_y) << "             ──────────"
              << std::flush;

    // 6
    Fox::sleep_for(frame_time);
    std::cout << Term::move_cursor(start_x, start_y) << " ────────────"
              << Term::move_cursor(start_x+1, start_y) << "                       │"
              << Term::move_cursor(start_x+2, start_y) << "                       │"
              << Term::move_cursor(start_x+3, start_y) << "                       │"
              << Term::move_cursor(start_x+4, start_y) << "                       │"
              << Term::move_cursor(start_x+5, start_y) << "│                      │"
              << Term::move_cursor(start_x+6, start_y) << "│                      │"
              << Term::move_cursor(start_x+7, start_y) << "│"
              << Term::move_cursor(start_x+8, start_y) << "│"
              << Term::move_cursor(start_x+9, start_y) << "│"
              << Term::move_cursor(start_x+10, start_y) << "│"
              << Term::move_cursor(start_x+11, start_y) << "           ────────────"
              << std::flush;

    // 7
    Fox::sleep_for(frame_time);
    std::cout << Term::move_cursor(start_x, start_y) << " ──────────────"
              << Term::move_cursor(start_x+1, start_y) << "                       │"
              << Term::move_cursor(start_x+2, start_y) << "                       │"
              << Term::move_cursor(start_x+3, start_y) << "                       │"
              << Term::move_cursor(start_x+4, start_y) << "│                      │"
              << Term::move_cursor(start_x+5, start_y) << "│                      │"
              << Term::move_cursor(start_x+6, start_y) << "│                      │"
              << Term::move_cursor(start_x+7, start_y) << "│                      │"
              << Term::move_cursor(start_x+8, start_y) << "│"
              << Term::move_cursor(start_x+9, start_y) << "│"
              << Term::move_cursor(start_x+10, start_y) << "│"
              << Term::move_cursor(start_x+11, start_y) << "         ──────────────"
              << std::flush;

    // 8
    Fox::sleep_for(frame_time);
    std::cout << Term::move_cursor(start_x, start_y) << " ────────────────"
              << Term::move_cursor(start_x+1, start_y) << "                       │"
              << Term::move_cursor(start_x+2, start_y) << "                       │"
              << Term::move_cursor(start_x+3, start_y) << "│                      │"
              << Term::move_cursor(start_x+4, start_y) << "│                      │"
              << Term::move_cursor(start_x+5, start_y) << "│                      │"
              << Term::move_cursor(start_x+6, start_y) << "│                      │"
              << Term::move_cursor(start_x+7, start_y) << "│                      │"
              << Term::move_cursor(start_x+8, start_y) << "│                      │"
              << Term::move_cursor(start_x+9, start_y) << "│"
              << Term::move_cursor(start_x+10, start_y) << "│"
              << Term::move_cursor(start_x+11, start_y) << "       ────────────────"
              << std::flush;

    // 9
    Fox::sleep_for(frame_time);
    std::cout << Term::move_cursor(start_x, start_y) << " ──────────────────"
              << Term::move_cursor(start_x+1, start_y) << "                       │"
              << Term::move_cursor(start_x+2, start_y) << "│                      │"
              << Term::move_cursor(start_x+3, start_y) << "│                      │"
              << Term::move_cursor(start_x+4, start_y) << "│                      │"
              << Term::move_cursor(start_x+5, start_y) << "│                      │"
              << Term::move_cursor(start_x+6, start_y) << "│                      │"
              << Term::move_cursor(start_x+7, start_y) << "│                      │"
              << Term::move_cursor(start_x+8, start_y) << "│                      │"
              << Term::move_cursor(start_x+9, start_y) << "│                      │"
              << Term::move_cursor(start_x+10, start_y) << "│"
              << Term::move_cursor(start_x+11, start_y) << "     ──────────────────"
              << std::flush;

    // 10
    Fox::sleep_for(frame_time);
    std::cout << Term::move_cursor(start_x, start_y) << " ────────────────────"
              << Term::move_cursor(start_x+1, start_y) << "│                      │"
              << Term::move_cursor(start_x+2, start_y) << "│                      │"
              << Term::move_cursor(start_x+3, start_y) << "│                      │"
              << Term::move_cursor(start_x+4, start_y) << "│                      │"
              << Term::move_cursor(start_x+5, start_y) << "│                      │"
              << Term::move_cursor(start_x+6, start_y) << "│                      │"
              << Term::move_cursor(start_x+7, start_y) << "│                      │"
              << Term::move_cursor(start_x+8, start_y) << "│                      │"
              << Term::move_cursor(start_x+9, start_y) << "│                      │"
              << Term::move_cursor(start_x+10, start_y) << "│                      │"
              << Term::move_cursor(start_x+11, start_y) << "   ────────────────────"
              << std::flush;

    // 11
    Fox::sleep_for(frame_time);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────"
              << Term::move_cursor(start_x+1, start_y) << "│                      │"
              << Term::move_cursor(start_x+2, start_y) << "│                      │"
              << Term::move_cursor(start_x+3, start_y) << "│                      │"
              << Term::move_cursor(start_x+4, start_y) << "│                      │"
              << Term::move_cursor(start_x+5, start_y) << "│                      │"
              << Term::move_cursor(start_x+6, start_y) << "│                      │"
              << Term::move_cursor(start_x+7, start_y) << "│                      │"
              << Term::move_cursor(start_x+8, start_y) << "│                      │"
              << Term::move_cursor(start_x+9, start_y) << "│                      │"
              << Term::move_cursor(start_x+10, start_y) << "│                      │"
              << Term::move_cursor(start_x+11, start_y) << " ──────────────────────┘"
              << std::flush;

    // 12
    Fox::sleep_for(frame_time / 2);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│                      │"
              << Term::move_cursor(start_x+2, start_y) << "│                      │"
              << Term::move_cursor(start_x+3, start_y) << "│                      │"
              << Term::move_cursor(start_x+4, start_y) << "│                      │"
              << Term::move_cursor(start_x+5, start_y) << "│                      │"
              << Term::move_cursor(start_x+6, start_y) << "│                      │"
              << Term::move_cursor(start_x+7, start_y) << "│                      │"
              << Term::move_cursor(start_x+8, start_y) << "│                      │"
              << Term::move_cursor(start_x+9, start_y) << "│                      │"
              << Term::move_cursor(start_x+10, start_y) << "│                      │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    // 13
    Fox::sleep_for(frame_time);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│                      │"
              << Term::move_cursor(start_x+2, start_y) << "│          ──          │"
              << Term::move_cursor(start_x+3, start_y) << "│                      │"
              << Term::move_cursor(start_x+4, start_y) << "│                      │"
              << Term::move_cursor(start_x+5, start_y) << "│                      │"
              << Term::move_cursor(start_x+6, start_y) << "│          ──          │"
              << Term::move_cursor(start_x+7, start_y) << "│                      │"
              << Term::move_cursor(start_x+8, start_y) << "│                      │"
              << Term::move_cursor(start_x+9, start_y) << "│          ──          │"
              << Term::move_cursor(start_x+10, start_y) << "│                      │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    // 14
    Fox::sleep_for(frame_time);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│                      │"
              << Term::move_cursor(start_x+2, start_y) << "│         ────         │"
              << Term::move_cursor(start_x+3, start_y) << "│                      │"
              << Term::move_cursor(start_x+4, start_y) << "│                      │"
              << Term::move_cursor(start_x+5, start_y) << "│                      │"
              << Term::move_cursor(start_x+6, start_y) << "│         ────         │"
              << Term::move_cursor(start_x+7, start_y) << "│                      │"
              << Term::move_cursor(start_x+8, start_y) << "│                      │"
              << Term::move_cursor(start_x+9, start_y) << "│         ────         │"
              << Term::move_cursor(start_x+10, start_y) << "│                      │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    // 15
    Fox::sleep_for(frame_time);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│                      │"
              << Term::move_cursor(start_x+2, start_y) << "│        ──────        │"
              << Term::move_cursor(start_x+3, start_y) << "│                      │"
              << Term::move_cursor(start_x+4, start_y) << "│                      │"
              << Term::move_cursor(start_x+5, start_y) << "│                      │"
              << Term::move_cursor(start_x+6, start_y) << "│        ──────        │"
              << Term::move_cursor(start_x+7, start_y) << "│                      │"
              << Term::move_cursor(start_x+8, start_y) << "│                      │"
              << Term::move_cursor(start_x+9, start_y) << "│         ────         │"
              << Term::move_cursor(start_x+10, start_y) << "│                      │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    // 16
    Fox::sleep_for(frame_time);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│                      │"
              << Term::move_cursor(start_x+2, start_y) << "│       ────────       │"
              << Term::move_cursor(start_x+3, start_y) << "│                      │"
              << Term::move_cursor(start_x+4, start_y) << "│                      │"
              << Term::move_cursor(start_x+5, start_y) << "│                      │"
              << Term::move_cursor(start_x+6, start_y) << "│       ────────       │"
              << Term::move_cursor(start_x+7, start_y) << "│                      │"
              << Term::move_cursor(start_x+8, start_y) << "│                      │"
              << Term::move_cursor(start_x+9, start_y) << "│         ────         │"
              << Term::move_cursor(start_x+10, start_y) << "│                      │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    // 17
    Fox::sleep_for(frame_time);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│                      │"
              << Term::move_cursor(start_x+2, start_y) << "│      ──────────      │"
              << Term::move_cursor(start_x+3, start_y) << "│                      │"
              << Term::move_cursor(start_x+4, start_y) << "│                      │"
              << Term::move_cursor(start_x+5, start_y) << "│                      │"
              << Term::move_cursor(start_x+6, start_y) << "│      ──────────      │"
              << Term::move_cursor(start_x+7, start_y) << "│                      │"
              << Term::move_cursor(start_x+8, start_y) << "│                      │"
              << Term::move_cursor(start_x+9, start_y) << "│         ────         │"
              << Term::move_cursor(start_x+10, start_y) << "│                      │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    // 18
    Fox::sleep_for(frame_time);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│                      │"
              << Term::move_cursor(start_x+2, start_y) << "│     ────────────     │"
              << Term::move_cursor(start_x+3, start_y) << "│                      │"
              << Term::move_cursor(start_x+4, start_y) << "│                      │"
              << Term::move_cursor(start_x+5, start_y) << "│                      │"
              << Term::move_cursor(start_x+6, start_y) << "│     ────────────     │"
              << Term::move_cursor(start_x+7, start_y) << "│                      │"
              << Term::move_cursor(start_x+8, start_y) << "│                      │"
              << Term::move_cursor(start_x+9, start_y) << "│         ────         │"
              << Term::move_cursor(start_x+10, start_y) << "│                      │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    // 19
    Fox::sleep_for(frame_time);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│                      │"
              << Term::move_cursor(start_x+2, start_y) << "│    ──────────────    │"
              << Term::move_cursor(start_x+3, start_y) << "│                      │"
              << Term::move_cursor(start_x+4, start_y) << "│                      │"
              << Term::move_cursor(start_x+5, start_y) << "│                      │"
              << Term::move_cursor(start_x+6, start_y) << "│    ──────────────    │"
              << Term::move_cursor(start_x+7, start_y) << "│                      │"
              << Term::move_cursor(start_x+8, start_y) << "│                      │"
              << Term::move_cursor(start_x+9, start_y) << "│         ────         │"
              << Term::move_cursor(start_x+10, start_y) << "│                      │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    // 20
    Fox::sleep_for(frame_time);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│                      │"
              << Term::move_cursor(start_x+2, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+3, start_y) << "│                      │"
              << Term::move_cursor(start_x+4, start_y) << "│                      │"
              << Term::move_cursor(start_x+5, start_y) << "│                      │"
              << Term::move_cursor(start_x+6, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+7, start_y) << "│                      │"
              << Term::move_cursor(start_x+8, start_y) << "│                      │"
              << Term::move_cursor(start_x+9, start_y) << "│         ────         │"
              << Term::move_cursor(start_x+10, start_y) << "│                      │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    // 21
    Fox::sleep_for(frame_time);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│                      │"
              << Term::move_cursor(start_x+2, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+3, start_y) << "│                      │"
              << Term::move_cursor(start_x+4, start_y) << "│       ─   ─  ─   ─   │"
              << Term::move_cursor(start_x+5, start_y) << "│                      │"
              << Term::move_cursor(start_x+6, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+7, start_y) << "│                      │"
              << Term::move_cursor(start_x+8, start_y) << "│                      │"
              << Term::move_cursor(start_x+9, start_y) << "│         ────         │"
              << Term::move_cursor(start_x+10, start_y) << "│                      │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    // 22
    Fox::sleep_for(frame_time);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│                      │"
              << Term::move_cursor(start_x+2, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+3, start_y) << "│                      │"
              << Term::move_cursor(start_x+4, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+5, start_y) << "│                      │"
              << Term::move_cursor(start_x+6, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+7, start_y) << "│                      │"
              << Term::move_cursor(start_x+8, start_y) << "│                      │"
              << Term::move_cursor(start_x+9, start_y) << "│         ────         │"
              << Term::move_cursor(start_x+10, start_y) << "│                      │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    // 23
    Fox::sleep_for(frame_time);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│                      │"
              << Term::move_cursor(start_x+2, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+3, start_y) << "│  ┌   ╷ ╷ ┌  ┌   ┌    │"
              << Term::move_cursor(start_x+4, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+5, start_y) << "│  └   ╵ ╵ └    ┘   ┘  │"
              << Term::move_cursor(start_x+6, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+7, start_y) << "│                      │"
              << Term::move_cursor(start_x+8, start_y) << "│                      │"
              << Term::move_cursor(start_x+9, start_y) << "│         ──A──        │"
              << Term::move_cursor(start_x+10, start_y) << "│                      │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    // 24
    Fox::sleep_for(frame_time);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│                      │"
              << Term::move_cursor(start_x+2, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+3, start_y) << "│  ┌─╴ ╷ ╷ ┌─ ┌─╴ ┌─╴  │"
              << Term::move_cursor(start_x+4, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+5, start_y) << "│  └─╴ ╵ ╵ └─ ╶─┘ ╶─┘  │"
              << Term::move_cursor(start_x+6, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+7, start_y) << "│                      │"
              << Term::move_cursor(start_x+8, start_y) << "│                      │"
              << Term::move_cursor(start_x+9, start_y) << "│         START        │"
              << Term::move_cursor(start_x+10, start_y) << "│                      │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    // 25
    Fox::sleep_for(frame_time);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│                      │"
              << Term::move_cursor(start_x+2, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+3, start_y) << "│  ┌─╴ ╷ ╷ ┌─ ┌─╴ ┌─╴  │"
              << Term::move_cursor(start_x+4, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+5, start_y) << "│  └─╴ ╵ ╵ └─ ╶─┘ ╶─┘  │"
              << Term::move_cursor(start_x+6, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+7, start_y) << "│                      │"
              << Term::move_cursor(start_x+8, start_y) << "│                      │"
              << Term::move_cursor(start_x+9, start_y) << "│>        START       <│"
              << Term::move_cursor(start_x+10, start_y) << "│                      │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    // 26
    Fox::sleep_for(frame_time / 2);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│                      │"
              << Term::move_cursor(start_x+2, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+3, start_y) << "│  ┌─╴ ╷ ╷ ┌─ ┌─╴ ┌─╴  │"
              << Term::move_cursor(start_x+4, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+5, start_y) << "│  └─╴ ╵ ╵ └─ ╶─┘ ╶─┘  │"
              << Term::move_cursor(start_x+6, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+7, start_y) << "│                      │"
              << Term::move_cursor(start_x+8, start_y) << "│                      │"
              << Term::move_cursor(start_x+9, start_y) << "│ >       START      < │"
              << Term::move_cursor(start_x+10, start_y) << "│                      │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    // 27
    Fox::sleep_for(frame_time / 2);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│                      │"
              << Term::move_cursor(start_x+2, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+3, start_y) << "│  ┌─╴ ╷ ╷ ┌─ ┌─╴ ┌─╴  │"
              << Term::move_cursor(start_x+4, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+5, start_y) << "│  └─╴ ╵ ╵ └─ ╶─┘ ╶─┘  │"
              << Term::move_cursor(start_x+6, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+7, start_y) << "│                      │"
              << Term::move_cursor(start_x+8, start_y) << "│                      │"
              << Term::move_cursor(start_x+9, start_y) << "│  >      START     <  │"
              << Term::move_cursor(start_x+10, start_y) << "│                      │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    // 28
    Fox::sleep_for(frame_time / 2);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│                      │"
              << Term::move_cursor(start_x+2, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+3, start_y) << "│  ┌─╴ ╷ ╷ ┌─ ┌─╴ ┌─╴  │"
              << Term::move_cursor(start_x+4, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+5, start_y) << "│  └─╴ ╵ ╵ └─ ╶─┘ ╶─┘  │"
              << Term::move_cursor(start_x+6, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+7, start_y) << "│                      │"
              << Term::move_cursor(start_x+8, start_y) << "│                      │"
              << Term::move_cursor(start_x+9, start_y) << "│   >     START    <   │"
              << Term::move_cursor(start_x+10, start_y) << "│                      │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    // 29
    Fox::sleep_for(frame_time / 2);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│                      │"
              << Term::move_cursor(start_x+2, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+3, start_y) << "│  ┌─╴ ╷ ╷ ┌─ ┌─╴ ┌─╴  │"
              << Term::move_cursor(start_x+4, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+5, start_y) << "│  └─╴ ╵ ╵ └─ ╶─┘ ╶─┘  │"
              << Term::move_cursor(start_x+6, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+7, start_y) << "│                      │"
              << Term::move_cursor(start_x+8, start_y) << "│                      │"
              << Term::move_cursor(start_x+9, start_y) << "│    >    START   <    │"
              << Term::move_cursor(start_x+10, start_y) << "│                      │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    // 30
    Fox::sleep_for(frame_time / 2);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│                      │"
              << Term::move_cursor(start_x+2, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+3, start_y) << "│  ┌─╴ ╷ ╷ ┌─ ┌─╴ ┌─╴  │"
              << Term::move_cursor(start_x+4, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+5, start_y) << "│  └─╴ ╵ ╵ └─ ╶─┘ ╶─┘  │"
              << Term::move_cursor(start_x+6, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+7, start_y) << "│                      │"
              << Term::move_cursor(start_x+8, start_y) << "│                      │"
              << Term::move_cursor(start_x+9, start_y) << "│     >   START  <     │"
              << Term::move_cursor(start_x+10, start_y) << "│                      │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    // 31
    Fox::sleep_for(frame_time / 2);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│                      │"
              << Term::move_cursor(start_x+2, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+3, start_y) << "│  ┌─╴ ╷ ╷ ┌─ ┌─╴ ┌─╴  │"
              << Term::move_cursor(start_x+4, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+5, start_y) << "│  └─╴ ╵ ╵ └─ ╶─┘ ╶─┘  │"
              << Term::move_cursor(start_x+6, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+7, start_y) << "│                      │"
              << Term::move_cursor(start_x+8, start_y) << "│                      │"
              << Term::move_cursor(start_x+9, start_y) << "│      >  START <      │"
              << Term::move_cursor(start_x+10, start_y) << "│                      │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    // 32
    Fox::sleep_for(frame_time / 4);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│                      │"
              << Term::move_cursor(start_x+2, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+3, start_y) << "│  ┌─╴ ╷ ╷ ┌─ ┌─╴ ┌─╴  │"
              << Term::move_cursor(start_x+4, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+5, start_y) << "│  └─╴ ╵ ╵ └─ ╶─┘ ╶─┘  │"
              << Term::move_cursor(start_x+6, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+7, start_y) << "│                      │"
              << Term::move_cursor(start_x+8, start_y) << "│                      │"
              << Term::move_cursor(start_x+9, start_y) << "│       > START <      │"
              << Term::move_cursor(start_x+10, start_y) << "│                      │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    // 33
    Fox::sleep_for(frame_time / 2);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│                      │"
              << Term::move_cursor(start_x+2, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+3, start_y) << "│  ┌─╴ ╷ ╷ ┌─ ┌─╴ ┌─╴  │"
              << Term::move_cursor(start_x+4, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+5, start_y) << "│  └─╴ ╵ ╵ └─ ╶─┘ ╶─┘  │"
              << Term::move_cursor(start_x+6, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+7, start_y) << "│                      │"
              << Term::move_cursor(start_x+8, start_y) << "│                      │"
              << Term::move_cursor(start_x+9, start_y) << "│        >START<       │"
              << Term::move_cursor(start_x+10, start_y) << "│                      │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    // 34
    Fox::sleep_for(frame_time / 2);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│                      │"
              << Term::move_cursor(start_x+2, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+3, start_y) << "│  ┌─╴ ╷ ╷ ┌─ ┌─╴ ┌─╴  │"
              << Term::move_cursor(start_x+4, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+5, start_y) << "│  └─╴ ╵ ╵ └─ ╶─┘ ╶─┘  │"
              << Term::move_cursor(start_x+6, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+7, start_y) << "│                      │"
              << Term::move_cursor(start_x+8, start_y) << "│                      │"
              << Term::move_cursor(start_x+9, start_y) << "│       > START <      │"
              << Term::move_cursor(start_x+10, start_y) << "│                      │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;
}

void Visual::animate_title_main_menu(uint8_t start_x, uint8_t start_y, uint32_t time_ms) {
    uint32_t frame_time = time_ms / 15;

    // 1
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│                      │"
              << Term::move_cursor(start_x+2, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+3, start_y) << "│  ┌─╴ ╷ ╷ ┌─ ┌─╴ ┌─╴  │"
              << Term::move_cursor(start_x+4, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+5, start_y) << "│  └─╴ ╵ ╵ └─ ╶─┘ ╶─┘  │"
              << Term::move_cursor(start_x+6, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+7, start_y) << "│                      │"
              << Term::move_cursor(start_x+8, start_y) << "│                      │"
              << Term::move_cursor(start_x+9, start_y) << "│        >START<       │"
              << Term::move_cursor(start_x+10, start_y) << "│                      │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    // 2
    Fox::sleep_for(frame_time);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│                      │"
              << Term::move_cursor(start_x+2, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+3, start_y) << "│  ┌─╴ ╷ ╷ ┌─ ┌─╴ ┌─╴  │"
              << Term::move_cursor(start_x+4, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+5, start_y) << "│  └─╴ ╵ ╵ └─ ╶─┘ ╶─┘  │"
              << Term::move_cursor(start_x+6, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+7, start_y) << "│                      │"
              << Term::move_cursor(start_x+8, start_y) << "│                      │"
              << Term::move_cursor(start_x+9, start_y) << "│       > START <      │"
              << Term::move_cursor(start_x+10, start_y) << "│                      │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    // 3
    Fox::sleep_for(frame_time);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│                      │"
              << Term::move_cursor(start_x+2, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+3, start_y) << "│  ┌─╴ ╷ ╷ ┌─ ┌─╴ ┌─╴  │"
              << Term::move_cursor(start_x+4, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+5, start_y) << "│  └─╴ ╵ ╵ └─ ╶─┘ ╶─┘  │"
              << Term::move_cursor(start_x+6, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+7, start_y) << "│                      │"
              << Term::move_cursor(start_x+8, start_y) << "│                      │"
              << Term::move_cursor(start_x+9, start_y) << "│      >  START  <     │"
              << Term::move_cursor(start_x+10, start_y) << "│                      │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    // 4
    Fox::sleep_for(frame_time);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│                      │"
              << Term::move_cursor(start_x+2, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+3, start_y) << "│  ┌─╴ ╷ ╷ ┌─ ┌─╴ ┌─╴  │"
              << Term::move_cursor(start_x+4, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+5, start_y) << "│  └─╴ ╵ ╵ └─ ╶─┘ ╶─┘  │"
              << Term::move_cursor(start_x+6, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+7, start_y) << "│                      │"
              << Term::move_cursor(start_x+8, start_y) << "│                      │"
              << Term::move_cursor(start_x+9, start_y) << "│     >   START   <    │"
              << Term::move_cursor(start_x+10, start_y) << "│                      │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    // 5
    Fox::sleep_for(frame_time);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│                      │"
              << Term::move_cursor(start_x+2, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+3, start_y) << "│  ┌─╴ ╷ ╷ ┌─ ┌─╴ ┌─╴  │"
              << Term::move_cursor(start_x+4, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+5, start_y) << "│  └─╴ ╵ ╵ └─ ╶─┘ ╶─┘  │"
              << Term::move_cursor(start_x+6, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+7, start_y) << "│                      │"
              << Term::move_cursor(start_x+8, start_y) << "│                      │"
              << Term::move_cursor(start_x+9, start_y) << "│    >    START    <   │"
              << Term::move_cursor(start_x+10, start_y) << "│                      │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    // 6
    Fox::sleep_for(frame_time);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│                      │"
              << Term::move_cursor(start_x+2, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+3, start_y) << "│  ┌─╴ ╷ ╷ ┌─ ┌─╴ ┌─╴  │"
              << Term::move_cursor(start_x+4, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+5, start_y) << "│  └─╴ ╵ ╵ └─ ╶─┘ ╶─┘  │"
              << Term::move_cursor(start_x+6, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+7, start_y) << "│                      │"
              << Term::move_cursor(start_x+8, start_y) << "│                      │"
              << Term::move_cursor(start_x+9, start_y) << "│   >     START     <  │"
              << Term::move_cursor(start_x+10, start_y) << "│                      │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    // 7
    Fox::sleep_for(frame_time);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│                      │"
              << Term::move_cursor(start_x+2, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+3, start_y) << "│  ┌─╴ ╷ ╷ ┌─ ┌─╴ ┌─╴  │"
              << Term::move_cursor(start_x+4, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+5, start_y) << "│  └─╴ ╵ ╵ └─ ╶─┘ ╶─┘  │"
              << Term::move_cursor(start_x+6, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+7, start_y) << "│                      │"
              << Term::move_cursor(start_x+8, start_y) << "│                      │"
              << Term::move_cursor(start_x+9, start_y) << "│  >      START      < │"
              << Term::move_cursor(start_x+10, start_y) << "│                      │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    // 8
    Fox::sleep_for(frame_time);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│                      │"
              << Term::move_cursor(start_x+2, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+3, start_y) << "│  ┌─╴ ╷ ╷ ┌─ ┌─╴ ┌─╴  │"
              << Term::move_cursor(start_x+4, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+5, start_y) << "│  └─╴ ╵ ╵ └─ ╶─┘ ╶─┘  │"
              << Term::move_cursor(start_x+6, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+7, start_y) << "│                      │"
              << Term::move_cursor(start_x+8, start_y) << "│                      │"
              << Term::move_cursor(start_x+9, start_y) << "│ >       START       <│"
              << Term::move_cursor(start_x+10, start_y) << "│                      │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    // 9
    Fox::sleep_for(frame_time);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+2, start_y) << "│  ┌─╴ ╷ ╷ ┌─ ┌─╴ ┌─╴  │"
              << Term::move_cursor(start_x+3, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+4, start_y) << "│  └─╴ ╵ ╵ └─ ╶─┘ ╶─┘  │"
              << Term::move_cursor(start_x+5, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+6, start_y) << "│                      │"
              << Term::move_cursor(start_x+7, start_y) << "│                      │"
              << Term::move_cursor(start_x+8, start_y) << "│                      │"
              << Term::move_cursor(start_x+9, start_y) << "│>        START       <│"
              << Term::move_cursor(start_x+10, start_y) << "│                      │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    // 10
    Fox::sleep_for(frame_time);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│  ┌─╴ ╷ ╷ ┌─ ┌─╴ ┌─╴  │"
              << Term::move_cursor(start_x+2, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+3, start_y) << "│  └─╴ ╵ ╵ └─ ╶─┘ ╶─┘  │"
              << Term::move_cursor(start_x+4, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+5, start_y) << "│                      │"
              << Term::move_cursor(start_x+6, start_y) << "│                      │"
              << Term::move_cursor(start_x+7, start_y) << "│                      │"
              << Term::move_cursor(start_x+8, start_y) << "│                      │"
              << Term::move_cursor(start_x+9, start_y) << "│         START        │"
              << Term::move_cursor(start_x+10, start_y) << "│                      │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    // 11
    Fox::sleep_for(frame_time);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│  ┌─╴ ╷ ╷ ┌─ ┌─╴ ┌─╴  │"
              << Term::move_cursor(start_x+2, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+3, start_y) << "│  └─╴ ╵ ╵ └─ ╶─┘ ╶─┘  │"
              << Term::move_cursor(start_x+4, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+5, start_y) << "│  CREDITS             │"
              << Term::move_cursor(start_x+6, start_y) << "│                      │"
              << Term::move_cursor(start_x+7, start_y) << "│                      │"
              << Term::move_cursor(start_x+8, start_y) << "│                      │"
              << Term::move_cursor(start_x+9, start_y) << "│                      │"
              << Term::move_cursor(start_x+10, start_y) << "│         START        │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    // 12
    Fox::sleep_for(frame_time);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│  ┌─╴ ╷ ╷ ┌─ ┌─╴ ┌─╴  │"
              << Term::move_cursor(start_x+2, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+3, start_y) << "│  └─╴ ╵ ╵ └─ ╶─┘ ╶─┘  │"
              << Term::move_cursor(start_x+4, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+5, start_y) << "│  HELP                │"
              << Term::move_cursor(start_x+6, start_y) << "│  CREDITS             │"
              << Term::move_cursor(start_x+7, start_y) << "│                      │"
              << Term::move_cursor(start_x+8, start_y) << "│                      │"
              << Term::move_cursor(start_x+9, start_y) << "│                      │"
              << Term::move_cursor(start_x+10, start_y) << "│                      │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    // 13
    Fox::sleep_for(frame_time);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│  ┌─╴ ╷ ╷ ┌─ ┌─╴ ┌─╴  │"
              << Term::move_cursor(start_x+2, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+3, start_y) << "│  └─╴ ╵ ╵ └─ ╶─┘ ╶─┘  │"
              << Term::move_cursor(start_x+4, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+5, start_y) << "│  ONLINE              │"
              << Term::move_cursor(start_x+6, start_y) << "│  HELP                │"
              << Term::move_cursor(start_x+7, start_y) << "│  CREDITS             │"
              << Term::move_cursor(start_x+8, start_y) << "│                      │"
              << Term::move_cursor(start_x+9, start_y) << "│                      │"
              << Term::move_cursor(start_x+10, start_y) << "│                      │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    // 14
    Fox::sleep_for(frame_time);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│  ┌─╴ ╷ ╷ ┌─ ┌─╴ ┌─╴  │"
              << Term::move_cursor(start_x+2, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+3, start_y) << "│  └─╴ ╵ ╵ └─ ╶─┘ ╶─┘  │"
              << Term::move_cursor(start_x+4, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+5, start_y) << "│  LOCAL               │"
              << Term::move_cursor(start_x+6, start_y) << "│  ONLINE              │"
              << Term::move_cursor(start_x+7, start_y) << "│  HELP                │"
              << Term::move_cursor(start_x+8, start_y) << "│  CREDITS             │"
              << Term::move_cursor(start_x+9, start_y) << "│                      │"
              << Term::move_cursor(start_x+10, start_y) << "│                      │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    // 15
    Fox::sleep_for(frame_time);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│  ┌─╴ ╷ ╷ ┌─ ┌─╴ ┌─╴  │"
              << Term::move_cursor(start_x+2, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+3, start_y) << "│  └─╴ ╵ ╵ └─ ╶─┘ ╶─┘  │"
              << Term::move_cursor(start_x+4, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+5, start_y) << "│                      │"
              << Term::move_cursor(start_x+6, start_y) << "│  LOCAL               │"
              << Term::move_cursor(start_x+7, start_y) << "│  ONLINE              │"
              << Term::move_cursor(start_x+8, start_y) << "│  HELP                │"
              << Term::move_cursor(start_x+9, start_y) << "│  CREDITS             │"
              << Term::move_cursor(start_x+10, start_y) << "│                      │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;
}

void Visual::animate_main_title(uint8_t start_x, uint8_t start_y, uint32_t time_ms) {
    uint8_t frame_time = time_ms / 30;

    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│  ┌─╴ ╷ ╷ ┌─ ┌─╴ ┌─╴  │"
              << Term::move_cursor(start_x+2, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+3, start_y) << "│  └─╴ ╵ ╵ └─ ╶─┘ ╶─┘  │"
              << Term::move_cursor(start_x+4, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+5, start_y) << "│                      │"
              << Term::move_cursor(start_x+6, start_y) << "│  LOCAL               │"
              << Term::move_cursor(start_x+7, start_y) << "│  ONLINE              │"
              << Term::move_cursor(start_x+8, start_y) << "│  HELP                │"
              << Term::move_cursor(start_x+9, start_y) << "│  CREDITS             │"
              << Term::move_cursor(start_x+10, start_y) << "│                      │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    Fox::sleep_for(frame_time);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│  ┌─╴ ╷ ╷ ┌─ ┌─╴ ┌─╴  │"
              << Term::move_cursor(start_x+2, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+3, start_y) << "│  └─╴ ╵ ╵ └─ ╶─┘ ╶─┘  │"
              << Term::move_cursor(start_x+4, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+5, start_y) << "│                      │"
              << Term::move_cursor(start_x+6, start_y) << "│                      │"
              << Term::move_cursor(start_x+7, start_y) << "│  LOCAL               │"
              << Term::move_cursor(start_x+8, start_y) << "│  ONLINE              │"
              << Term::move_cursor(start_x+9, start_y) << "│  HELP                │"
              << Term::move_cursor(start_x+10, start_y) << "│  CREDITS             │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    Fox::sleep_for(frame_time);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+2, start_y) << "│  ┌─╴ ╷ ╷ ┌─ ┌─╴ ┌─╴  │"
              << Term::move_cursor(start_x+3, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+4, start_y) << "│  └─╴ ╵ ╵ └─ ╶─┘ ╶─┘  │"
              << Term::move_cursor(start_x+5, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+6, start_y) << "│                      │"
              << Term::move_cursor(start_x+7, start_y) << "│                      │"
              << Term::move_cursor(start_x+8, start_y) << "│  LOCAL               │"
              << Term::move_cursor(start_x+9, start_y) << "│  ONLINE              │"
              << Term::move_cursor(start_x+10, start_y) << "│  HELP                │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    Fox::sleep_for(frame_time);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│                      │"
              << Term::move_cursor(start_x+2, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+3, start_y) << "│  ┌─╴ ╷ ╷ ┌─ ┌─╴ ┌─╴  │"
              << Term::move_cursor(start_x+4, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+5, start_y) << "│  └─╴ ╵ ╵ └─ ╶─┘ ╶─┘  │"
              << Term::move_cursor(start_x+6, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+7, start_y) << "│         START        │"
              << Term::move_cursor(start_x+8, start_y) << "│                      │"
              << Term::move_cursor(start_x+9, start_y) << "│  LOCAL               │"
              << Term::move_cursor(start_x+10, start_y) << "│  ONLINE              │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    Fox::sleep_for(frame_time);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│                      │"
              << Term::move_cursor(start_x+2, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+3, start_y) << "│  ┌─╴ ╷ ╷ ┌─ ┌─╴ ┌─╴  │"
              << Term::move_cursor(start_x+4, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+5, start_y) << "│  └─╴ ╵ ╵ └─ ╶─┘ ╶─┘  │"
              << Term::move_cursor(start_x+6, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+7, start_y) << "│                      │"
              << Term::move_cursor(start_x+8, start_y) << "│         START        │"
              << Term::move_cursor(start_x+9, start_y) << "│                      │"
              << Term::move_cursor(start_x+10, start_y) << "│  LOCAL               │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    Fox::sleep_for(frame_time);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│                      │"
              << Term::move_cursor(start_x+2, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+3, start_y) << "│  ┌─╴ ╷ ╷ ┌─ ┌─╴ ┌─╴  │"
              << Term::move_cursor(start_x+4, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+5, start_y) << "│  └─╴ ╵ ╵ └─ ╶─┘ ╶─┘  │"
              << Term::move_cursor(start_x+6, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+7, start_y) << "│                      │"
              << Term::move_cursor(start_x+8, start_y) << "│                      │"
              << Term::move_cursor(start_x+9, start_y) << "│         START        │"
              << Term::move_cursor(start_x+10, start_y) << "│                      │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    Fox::sleep_for(frame_time);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│                      │"
              << Term::move_cursor(start_x+2, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+3, start_y) << "│  ┌─╴ ╷ ╷ ┌─ ┌─╴ ┌─╴  │"
              << Term::move_cursor(start_x+4, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+5, start_y) << "│  └─╴ ╵ ╵ └─ ╶─┘ ╶─┘  │"
              << Term::move_cursor(start_x+6, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+7, start_y) << "│                      │"
              << Term::move_cursor(start_x+8, start_y) << "│                      │"
              << Term::move_cursor(start_x+9, start_y) << "│>        START       <│"
              << Term::move_cursor(start_x+10, start_y) << "│                      │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    Fox::sleep_for(frame_time / 2);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│                      │"
              << Term::move_cursor(start_x+2, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+3, start_y) << "│  ┌─╴ ╷ ╷ ┌─ ┌─╴ ┌─╴  │"
              << Term::move_cursor(start_x+4, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+5, start_y) << "│  └─╴ ╵ ╵ └─ ╶─┘ ╶─┘  │"
              << Term::move_cursor(start_x+6, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+7, start_y) << "│                      │"
              << Term::move_cursor(start_x+8, start_y) << "│                      │"
              << Term::move_cursor(start_x+9, start_y) << "│ >       START      < │"
              << Term::move_cursor(start_x+10, start_y) << "│                      │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    Fox::sleep_for(frame_time / 2);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│                      │"
              << Term::move_cursor(start_x+2, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+3, start_y) << "│  ┌─╴ ╷ ╷ ┌─ ┌─╴ ┌─╴  │"
              << Term::move_cursor(start_x+4, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+5, start_y) << "│  └─╴ ╵ ╵ └─ ╶─┘ ╶─┘  │"
              << Term::move_cursor(start_x+6, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+7, start_y) << "│                      │"
              << Term::move_cursor(start_x+8, start_y) << "│                      │"
              << Term::move_cursor(start_x+9, start_y) << "│  >      START     <  │"
              << Term::move_cursor(start_x+10, start_y) << "│                      │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    Fox::sleep_for(frame_time / 2);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│                      │"
              << Term::move_cursor(start_x+2, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+3, start_y) << "│  ┌─╴ ╷ ╷ ┌─ ┌─╴ ┌─╴  │"
              << Term::move_cursor(start_x+4, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+5, start_y) << "│  └─╴ ╵ ╵ └─ ╶─┘ ╶─┘  │"
              << Term::move_cursor(start_x+6, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+7, start_y) << "│                      │"
              << Term::move_cursor(start_x+8, start_y) << "│                      │"
              << Term::move_cursor(start_x+9, start_y) << "│   >     START    <   │"
              << Term::move_cursor(start_x+10, start_y) << "│                      │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    Fox::sleep_for(frame_time / 2);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│                      │"
              << Term::move_cursor(start_x+2, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+3, start_y) << "│  ┌─╴ ╷ ╷ ┌─ ┌─╴ ┌─╴  │"
              << Term::move_cursor(start_x+4, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+5, start_y) << "│  └─╴ ╵ ╵ └─ ╶─┘ ╶─┘  │"
              << Term::move_cursor(start_x+6, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+7, start_y) << "│                      │"
              << Term::move_cursor(start_x+8, start_y) << "│                      │"
              << Term::move_cursor(start_x+9, start_y) << "│    >    START   <    │"
              << Term::move_cursor(start_x+10, start_y) << "│                      │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    Fox::sleep_for(frame_time / 2);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│                      │"
              << Term::move_cursor(start_x+2, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+3, start_y) << "│  ┌─╴ ╷ ╷ ┌─ ┌─╴ ┌─╴  │"
              << Term::move_cursor(start_x+4, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+5, start_y) << "│  └─╴ ╵ ╵ └─ ╶─┘ ╶─┘  │"
              << Term::move_cursor(start_x+6, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+7, start_y) << "│                      │"
              << Term::move_cursor(start_x+8, start_y) << "│                      │"
              << Term::move_cursor(start_x+9, start_y) << "│     >   START  <     │"
              << Term::move_cursor(start_x+10, start_y) << "│                      │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    Fox::sleep_for(frame_time / 2);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│                      │"
              << Term::move_cursor(start_x+2, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+3, start_y) << "│  ┌─╴ ╷ ╷ ┌─ ┌─╴ ┌─╴  │"
              << Term::move_cursor(start_x+4, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+5, start_y) << "│  └─╴ ╵ ╵ └─ ╶─┘ ╶─┘  │"
              << Term::move_cursor(start_x+6, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+7, start_y) << "│                      │"
              << Term::move_cursor(start_x+8, start_y) << "│                      │"
              << Term::move_cursor(start_x+9, start_y) << "│      >  START <      │"
              << Term::move_cursor(start_x+10, start_y) << "│                      │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    Fox::sleep_for(frame_time / 4);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│                      │"
              << Term::move_cursor(start_x+2, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+3, start_y) << "│  ┌─╴ ╷ ╷ ┌─ ┌─╴ ┌─╴  │"
              << Term::move_cursor(start_x+4, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+5, start_y) << "│  └─╴ ╵ ╵ └─ ╶─┘ ╶─┘  │"
              << Term::move_cursor(start_x+6, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+7, start_y) << "│                      │"
              << Term::move_cursor(start_x+8, start_y) << "│                      │"
              << Term::move_cursor(start_x+9, start_y) << "│       > START <      │"
              << Term::move_cursor(start_x+10, start_y) << "│                      │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    Fox::sleep_for(frame_time / 2);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│                      │"
              << Term::move_cursor(start_x+2, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+3, start_y) << "│  ┌─╴ ╷ ╷ ┌─ ┌─╴ ┌─╴  │"
              << Term::move_cursor(start_x+4, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+5, start_y) << "│  └─╴ ╵ ╵ └─ ╶─┘ ╶─┘  │"
              << Term::move_cursor(start_x+6, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+7, start_y) << "│                      │"
              << Term::move_cursor(start_x+8, start_y) << "│                      │"
              << Term::move_cursor(start_x+9, start_y) << "│        >START<       │"
              << Term::move_cursor(start_x+10, start_y) << "│                      │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    Fox::sleep_for(frame_time / 2);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│                      │"
              << Term::move_cursor(start_x+2, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+3, start_y) << "│  ┌─╴ ╷ ╷ ┌─ ┌─╴ ┌─╴  │"
              << Term::move_cursor(start_x+4, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+5, start_y) << "│  └─╴ ╵ ╵ └─ ╶─┘ ╶─┘  │"
              << Term::move_cursor(start_x+6, start_y) << "│   ────────────────   │"
              << Term::move_cursor(start_x+7, start_y) << "│                      │"
              << Term::move_cursor(start_x+8, start_y) << "│                      │"
              << Term::move_cursor(start_x+9, start_y) << "│       > START <      │"
              << Term::move_cursor(start_x+10, start_y) << "│                      │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;
}

void Visual::animate_main_to_about(uint8_t start_x, uint8_t start_y, uint32_t time_ms) {
    uint32_t frame_time = time_ms / 5;

    // 1
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│  ┌─╴ ╷ ╷ ┌─ ┌─╴ ┌─╴  │"
              << Term::move_cursor(start_x+2, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+3, start_y) << "│  └─╴ ╵ ╵ └─ ╶─┘ ╶─┘  │"
              << Term::move_cursor(start_x+4, start_y) << "│  ──────────────────  │"
              << Term::move_cursor(start_x+5, start_y) << "│   For Furdevs 0x01   │"
              << Term::move_cursor(start_x+6, start_y) << "│                      │"
              << Term::move_cursor(start_x+7, start_y) << "│  LOCAL               │"
              << Term::move_cursor(start_x+8, start_y) << "│  ONLINE              │"
              << Term::move_cursor(start_x+9, start_y) << "│  HELP                │"
              << Term::move_cursor(start_x+10, start_y) << "│  CREDITS             │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    // 2
    Fox::sleep_for(frame_time);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│  ┌─╴ ╷ ╷ ┌─ ┌─╴ ┌─╴  │"
              << Term::move_cursor(start_x+2, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+3, start_y) << "│  └─╴ ╵ ╵ └─ ╶─┘ ╶─┘  │"
              << Term::move_cursor(start_x+4, start_y) << "│  ──────────────────  │"
              << Term::move_cursor(start_x+5, start_y) << "│    by Damon \"Stax\"   │"
              << Term::move_cursor(start_x+6, start_y) << "│   For Furdevs 0x01   │"
              << Term::move_cursor(start_x+7, start_y) << "│                      │"
              << Term::move_cursor(start_x+8, start_y) << "│  LOCAL               │"
              << Term::move_cursor(start_x+9, start_y) << "│  ONLINE              │"
              << Term::move_cursor(start_x+10, start_y) << "│  HELP                │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    // 3
    Fox::sleep_for(frame_time);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│  ┌─╴ ╷ ╷ ┌─ ┌─╴ ┌─╴  │"
              << Term::move_cursor(start_x+2, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+3, start_y) << "│  └─╴ ╵ ╵ └─ ╶─┘ ╶─┘  │"
              << Term::move_cursor(start_x+4, start_y) << "│  ──────────────────  │"
              << Term::move_cursor(start_x+5, start_y) << "│      ╶────────╴      │"
              << Term::move_cursor(start_x+6, start_y) << "│    by Damon \"Stax\"   │"
              << Term::move_cursor(start_x+7, start_y) << "│   For Furdevs 0x01   │"
              << Term::move_cursor(start_x+8, start_y) << "│                      │"
              << Term::move_cursor(start_x+9, start_y) << "│  LOCAL               │"
              << Term::move_cursor(start_x+10, start_y) << "│  ONLINE              │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    // 4
    Fox::sleep_for(frame_time);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│  ┌─╴ ╷ ╷ ┌─ ┌─╴ ┌─╴  │"
              << Term::move_cursor(start_x+2, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+3, start_y) << "│  └─╴ ╵ ╵ └─ ╶─┘ ╶─┘  │"
              << Term::move_cursor(start_x+4, start_y) << "│  ──────────────────  │"
              << Term::move_cursor(start_x+5, start_y) << "│      Chess Game      │"
              << Term::move_cursor(start_x+6, start_y) << "│      ╶────────╴      │"
              << Term::move_cursor(start_x+7, start_y) << "│    by Damon \"Stax\"   │"
              << Term::move_cursor(start_x+8, start_y) << "│   For Furdevs 0x01   │"
              << Term::move_cursor(start_x+9, start_y) << "│                      │"
              << Term::move_cursor(start_x+10, start_y) << "│  LOCAL               │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    // 5
    Fox::sleep_for(frame_time);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│  ┌─╴ ╷ ╷ ┌─ ┌─╴ ┌─╴  │"
              << Term::move_cursor(start_x+2, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+3, start_y) << "│  └─╴ ╵ ╵ └─ ╶─┘ ╶─┘  │"
              << Term::move_cursor(start_x+4, start_y) << "│  ──────────────────  │"
              << Term::move_cursor(start_x+5, start_y) << "│                      │"
              << Term::move_cursor(start_x+6, start_y) << "│      Chess Game      │"
              << Term::move_cursor(start_x+7, start_y) << "│      ╶────────╴      │"
              << Term::move_cursor(start_x+8, start_y) << "│    by Damon \"Stax\"   │"
              << Term::move_cursor(start_x+9, start_y) << "│   For Furdevs 0x01   │"
              << Term::move_cursor(start_x+10, start_y) << "│                      │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;
}

void Visual::animate_about_to_main(uint8_t start_x, uint8_t start_y, uint32_t time_ms) {
    uint32_t frame_time = time_ms / 5;

    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│  ┌─╴ ╷ ╷ ┌─ ┌─╴ ┌─╴  │"
              << Term::move_cursor(start_x+2, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+3, start_y) << "│  └─╴ ╵ ╵ └─ ╶─┘ ╶─┘  │"
              << Term::move_cursor(start_x+4, start_y) << "│  ──────────────────  │"
              << Term::move_cursor(start_x+5, start_y) << "│  CREDITS             │"
              << Term::move_cursor(start_x+6, start_y) << "│                      │"
              << Term::move_cursor(start_x+7, start_y) << "│      Chess Game      │"
              << Term::move_cursor(start_x+8, start_y) << "│      ╶────────╴      │"
              << Term::move_cursor(start_x+9, start_y) << "│    by Damon \"Stax\"   │"
              << Term::move_cursor(start_x+10, start_y) << "│   For Furdevs 0x01   │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    Fox::sleep_for(frame_time);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│  ┌─╴ ╷ ╷ ┌─ ┌─╴ ┌─╴  │"
              << Term::move_cursor(start_x+2, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+3, start_y) << "│  └─╴ ╵ ╵ └─ ╶─┘ ╶─┘  │"
              << Term::move_cursor(start_x+4, start_y) << "│  ──────────────────  │"
              << Term::move_cursor(start_x+5, start_y) << "│  HELP                │"
              << Term::move_cursor(start_x+6, start_y) << "│  CREDITS             │"
              << Term::move_cursor(start_x+7, start_y) << "│                      │"
              << Term::move_cursor(start_x+8, start_y) << "│      Chess Game      │"
              << Term::move_cursor(start_x+9, start_y) << "│      ╶────────╴      │"
              << Term::move_cursor(start_x+10, start_y) << "│    by Damon \"Stax\"   │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    Fox::sleep_for(frame_time);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│  ┌─╴ ╷ ╷ ┌─ ┌─╴ ┌─╴  │"
              << Term::move_cursor(start_x+2, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+3, start_y) << "│  └─╴ ╵ ╵ └─ ╶─┘ ╶─┘  │"
              << Term::move_cursor(start_x+4, start_y) << "│  ──────────────────  │"
              << Term::move_cursor(start_x+5, start_y) << "│  ONLINE              │"
              << Term::move_cursor(start_x+6, start_y) << "│  HELP                │"
              << Term::move_cursor(start_x+7, start_y) << "│  CREDITS             │"
              << Term::move_cursor(start_x+8, start_y) << "│                      │"
              << Term::move_cursor(start_x+9, start_y) << "│      Chess Game      │"
              << Term::move_cursor(start_x+10, start_y) << "│      ╶────────╴      │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    Fox::sleep_for(frame_time);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│  ┌─╴ ╷ ╷ ┌─ ┌─╴ ┌─╴  │"
              << Term::move_cursor(start_x+2, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+3, start_y) << "│  └─╴ ╵ ╵ └─ ╶─┘ ╶─┘  │"
              << Term::move_cursor(start_x+4, start_y) << "│  ──────────────────  │"
              << Term::move_cursor(start_x+5, start_y) << "│  LOCAL               │"
              << Term::move_cursor(start_x+6, start_y) << "│  ONLINE              │"
              << Term::move_cursor(start_x+7, start_y) << "│  HELP                │"
              << Term::move_cursor(start_x+8, start_y) << "│  CREDITS             │"
              << Term::move_cursor(start_x+9, start_y) << "│                      │"
              << Term::move_cursor(start_x+10, start_y) << "│      Chess Game      │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    Fox::sleep_for(frame_time);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│  ┌─╴ ╷ ╷ ┌─ ┌─╴ ┌─╴  │"
              << Term::move_cursor(start_x+2, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+3, start_y) << "│  └─╴ ╵ ╵ └─ ╶─┘ ╶─┘  │"
              << Term::move_cursor(start_x+4, start_y) << "│  ──────────────────  │"
              << Term::move_cursor(start_x+5, start_y) << "│                      │"
              << Term::move_cursor(start_x+6, start_y) << "│  LOCAL               │"
              << Term::move_cursor(start_x+7, start_y) << "│  ONLINE              │"
              << Term::move_cursor(start_x+8, start_y) << "│  HELP                │"
              << Term::move_cursor(start_x+9, start_y) << "│  CREDITS             │"
              << Term::move_cursor(start_x+10, start_y) << "│                      │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;
}
void Visual::animate_main_to_help(uint8_t start_x, uint8_t start_y, uint32_t time_ms) {
    uint32_t frame_time = time_ms / 5;

    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│  ┌─╴ ╷ ╷ ┌─ ┌─╴ ┌─╴  │"
              << Term::move_cursor(start_x+2, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+3, start_y) << "│  └─╴ ╵ ╵ └─ ╶─┘ ╶─┘  │"
              << Term::move_cursor(start_x+4, start_y) << "│  ──────────────────  │"
              << Term::move_cursor(start_x+5, start_y) << "│   s              ↓   │"
              << Term::move_cursor(start_x+6, start_y) << "│                      │"
              << Term::move_cursor(start_x+7, start_y) << "│  LOCAL               │"
              << Term::move_cursor(start_x+8, start_y) << "│  ONLINE              │"
              << Term::move_cursor(start_x+9, start_y) << "│  HELP                │"
              << Term::move_cursor(start_x+10, start_y) << "│  CREDITS             │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    Fox::sleep_for(frame_time);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│  ┌─╴ ╷ ╷ ┌─ ┌─╴ ┌─╴  │"
              << Term::move_cursor(start_x+2, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+3, start_y) << "│  └─╴ ╵ ╵ └─ ╶─┘ ╶─┘  │"
              << Term::move_cursor(start_x+4, start_y) << "│  ──────────────────  │"
              << Term::move_cursor(start_x+5, start_y) << "│ a   d   ╵P╵    ←   → │"
              << Term::move_cursor(start_x+6, start_y) << "│   s              ↓   │"
              << Term::move_cursor(start_x+7, start_y) << "│                      │"
              << Term::move_cursor(start_x+8, start_y) << "│  LOCAL               │"
              << Term::move_cursor(start_x+9, start_y) << "│  ONLINE              │"
              << Term::move_cursor(start_x+10, start_y) << "│  HELP                │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    Fox::sleep_for(frame_time);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│  ┌─╴ ╷ ╷ ┌─ ┌─╴ ┌─╴  │"
              << Term::move_cursor(start_x+2, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+3, start_y) << "│  └─╴ ╵ ╵ └─ ╶─┘ ╶─┘  │"
              << Term::move_cursor(start_x+4, start_y) << "│  ──────────────────  │"
              << Term::move_cursor(start_x+5, start_y) << "│   w     │L│      ↑   │"
              << Term::move_cursor(start_x+6, start_y) << "│ a   d   ╵P╵    ←   → │"
              << Term::move_cursor(start_x+7, start_y) << "│   s              ↓   │"
              << Term::move_cursor(start_x+8, start_y) << "│                      │"
              << Term::move_cursor(start_x+9, start_y) << "│  LOCAL               │"
              << Term::move_cursor(start_x+10, start_y) << "│  ONLINE              │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    Fox::sleep_for(frame_time);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│  ┌─╴ ╷ ╷ ┌─ ┌─╴ ┌─╴  │"
              << Term::move_cursor(start_x+2, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+3, start_y) << "│  └─╴ ╵ ╵ └─ ╶─┘ ╶─┘  │"
              << Term::move_cursor(start_x+4, start_y) << "│  ──────────────────  │"
              << Term::move_cursor(start_x+5, start_y) << "│         │E│          │"
              << Term::move_cursor(start_x+6, start_y) << "│   w     │L│      ↑   │"
              << Term::move_cursor(start_x+7, start_y) << "│ a   d   ╵P╵    ←   → │"
              << Term::move_cursor(start_x+8, start_y) << "│   s              ↓   │"
              << Term::move_cursor(start_x+9, start_y) << "│                      │"
              << Term::move_cursor(start_x+10, start_y) << "│  LOCAL               │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    Fox::sleep_for(frame_time);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│  ┌─╴ ╷ ╷ ┌─ ┌─╴ ┌─╴  │"
              << Term::move_cursor(start_x+2, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+3, start_y) << "│  └─╴ ╵ ╵ └─ ╶─┘ ╶─┘  │"
              << Term::move_cursor(start_x+4, start_y) << "│  ──────────────────  │"
              << Term::move_cursor(start_x+5, start_y) << "│ white   ╷H╷    black │"
              << Term::move_cursor(start_x+6, start_y) << "│         │E│          │"
              << Term::move_cursor(start_x+7, start_y) << "│   w     │L│      ↑   │"
              << Term::move_cursor(start_x+8, start_y) << "│ a   d   ╵P╵    ←   → │"
              << Term::move_cursor(start_x+9, start_y) << "│   s              ↓   │"
              << Term::move_cursor(start_x+10, start_y) << "│                      │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    Fox::sleep_for(frame_time);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│  ┌─╴ ╷ ╷ ┌─ ┌─╴ ┌─╴  │"
              << Term::move_cursor(start_x+2, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+3, start_y) << "│  └─╴ ╵ ╵ └─ ╶─┘ ╶─┘  │"
              << Term::move_cursor(start_x+4, start_y) << "│  ──────────────────  │"
              << Term::move_cursor(start_x+5, start_y) << "│                      │"
              << Term::move_cursor(start_x+6, start_y) << "│ white   ╷H╷    black │"
              << Term::move_cursor(start_x+7, start_y) << "│         │E│          │"
              << Term::move_cursor(start_x+8, start_y) << "│   w     │L│      ↑   │"
              << Term::move_cursor(start_x+9, start_y) << "│ a   d   ╵P╵    ←   → │"
              << Term::move_cursor(start_x+10, start_y) << "│   s              ↓   │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;
}

void Visual::animate_help_to_main(uint8_t start_x, uint8_t start_y, uint32_t time_ms) {
    uint32_t frame_time = time_ms / 5;

    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│  ┌─╴ ╷ ╷ ┌─ ┌─╴ ┌─╴  │"
              << Term::move_cursor(start_x+2, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+3, start_y) << "│  └─╴ ╵ ╵ └─ ╶─┘ ╶─┘  │"
              << Term::move_cursor(start_x+4, start_y) << "│  ──────────────────  │"
              << Term::move_cursor(start_x+5, start_y) << "│  CREDITS             │"
              << Term::move_cursor(start_x+6, start_y) << "│                      │"
              << Term::move_cursor(start_x+7, start_y) << "│ white   ╷H╷    black │"
              << Term::move_cursor(start_x+8, start_y) << "│         │E│          │"
              << Term::move_cursor(start_x+9, start_y) << "│   w     │L│      ↑   │"
              << Term::move_cursor(start_x+10, start_y) << "│ a   d   ╵P╵    ←   → │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    Fox::sleep_for(frame_time);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│  ┌─╴ ╷ ╷ ┌─ ┌─╴ ┌─╴  │"
              << Term::move_cursor(start_x+2, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+3, start_y) << "│  └─╴ ╵ ╵ └─ ╶─┘ ╶─┘  │"
              << Term::move_cursor(start_x+4, start_y) << "│  ──────────────────  │"
              << Term::move_cursor(start_x+5, start_y) << "│  HELP                │"
              << Term::move_cursor(start_x+6, start_y) << "│  CREDITS             │"
              << Term::move_cursor(start_x+7, start_y) << "│                      │"
              << Term::move_cursor(start_x+8, start_y) << "│ white   ╷H╷    black │"
              << Term::move_cursor(start_x+9, start_y) << "│         │E│          │"
              << Term::move_cursor(start_x+10, start_y) << "│   w     │L│      ↑   │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    Fox::sleep_for(frame_time);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│  ┌─╴ ╷ ╷ ┌─ ┌─╴ ┌─╴  │"
              << Term::move_cursor(start_x+2, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+3, start_y) << "│  └─╴ ╵ ╵ └─ ╶─┘ ╶─┘  │"
              << Term::move_cursor(start_x+4, start_y) << "│  ──────────────────  │"
              << Term::move_cursor(start_x+5, start_y) << "│  ONLINE              │"
              << Term::move_cursor(start_x+6, start_y) << "│  HELP                │"
              << Term::move_cursor(start_x+7, start_y) << "│  CREDITS             │"
              << Term::move_cursor(start_x+8, start_y) << "│                      │"
              << Term::move_cursor(start_x+9, start_y) << "│ white   ╷H╷    black │"
              << Term::move_cursor(start_x+10, start_y) << "│         │E│          │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    Fox::sleep_for(frame_time);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│  ┌─╴ ╷ ╷ ┌─ ┌─╴ ┌─╴  │"
              << Term::move_cursor(start_x+2, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+3, start_y) << "│  └─╴ ╵ ╵ └─ ╶─┘ ╶─┘  │"
              << Term::move_cursor(start_x+4, start_y) << "│  ──────────────────  │"
              << Term::move_cursor(start_x+5, start_y) << "│  LOCAL               │"
              << Term::move_cursor(start_x+6, start_y) << "│  ONLINE              │"
              << Term::move_cursor(start_x+7, start_y) << "│  HELP                │"
              << Term::move_cursor(start_x+8, start_y) << "│  CREDITS             │"
              << Term::move_cursor(start_x+9, start_y) << "│                      │"
              << Term::move_cursor(start_x+10, start_y) << "│ white   ╷H╷    black │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

    Fox::sleep_for(frame_time);
    std::cout << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│  ┌─╴ ╷ ╷ ┌─ ┌─╴ ┌─╴  │"
              << Term::move_cursor(start_x+2, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+3, start_y) << "│  └─╴ ╵ ╵ └─ ╶─┘ ╶─┘  │"
              << Term::move_cursor(start_x+4, start_y) << "│  ──────────────────  │"
              << Term::move_cursor(start_x+5, start_y) << "│                      │"
              << Term::move_cursor(start_x+6, start_y) << "│  LOCAL               │"
              << Term::move_cursor(start_x+7, start_y) << "│  ONLINE              │"
              << Term::move_cursor(start_x+8, start_y) << "│  HELP                │"
              << Term::move_cursor(start_x+9, start_y) << "│  CREDITS             │"
              << Term::move_cursor(start_x+10, start_y) << "│                      │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;

}

void Visual::draw_main_menu(uint8_t start_x, uint8_t start_y, uint32_t time_ms) {
    std::cout << Term::clear_screen()
    << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│  ┌─╴ ╷ ╷ ┌─ ┌─╴ ┌─╴  │"
              << Term::move_cursor(start_x+2, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+3, start_y) << "│  └─╴ ╵ ╵ └─ ╶─┘ ╶─┘  │"
              << Term::move_cursor(start_x+4, start_y) << "│  ──────────────────  │"
              << Term::move_cursor(start_x+5, start_y) << "│                      │"
              << Term::move_cursor(start_x+6, start_y) << "│  LOCAL               │"
              << Term::move_cursor(start_x+7, start_y) << "│  ONLINE              │"
              << Term::move_cursor(start_x+8, start_y) << "│  HELP                │"
              << Term::move_cursor(start_x+9, start_y) << "│  CREDITS             │"
              << Term::move_cursor(start_x+10, start_y) << "│                      │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;
}

void Visual::draw_coming_soon_online(uint8_t start_x, uint8_t start_y) {
    std::cout << Term::clear_screen()
              << Term::move_cursor(start_x, start_y) << "┌──────────────────────┐"
              << Term::move_cursor(start_x+1, start_y) << "│  ┌─╴ ╷ ╷ ┌─ ┌─╴ ┌─╴  │"
              << Term::move_cursor(start_x+2, start_y) << "│  │   ├─┤ ├─ └─┐ └─┐  │"
              << Term::move_cursor(start_x+3, start_y) << "│  └─╴ ╵ ╵ └─ ╶─┘ ╶─┘  │"
              << Term::move_cursor(start_x+4, start_y) << "│  ──────────────────  │"
              << Term::move_cursor(start_x+5, start_y) << "│                      │"
              << Term::move_cursor(start_x+6, start_y) << "│        Online        │"
              << Term::move_cursor(start_x+7, start_y) << "│        ╶────╴        │"
              << Term::move_cursor(start_x+8, start_y) << "│    Not implemented   │"
              << Term::move_cursor(start_x+9, start_y) << "│                      │"
              << Term::move_cursor(start_x+10, start_y) << "│                      │"
              << Term::move_cursor(start_x+11, start_y) << "└──────────────────────┘"
              << std::flush;
}