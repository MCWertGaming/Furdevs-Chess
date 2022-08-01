#include "menu.hpp"
#include "visual.hpp"
#include <cpp-terminal/base.hpp>
#include <cpp-terminal/input.hpp>
#include <iostream>

Menu::Main_menu::Main_menu() {
    Term::get_term_size(m_menu_start_x, m_menu_start_y);
    m_menu_start_y = (m_menu_start_y - 24) / 2;
    m_menu_start_x = (m_menu_start_x - 12) / 2;
}

void Menu::Main_menu::print_cursor(uint8_t pos) {
    std::cout << Term::move_cursor(m_menu_start_x+6, m_menu_start_y+19) << "  "
            << Term::move_cursor(m_menu_start_x+7, m_menu_start_y+19) << "  "
            << Term::move_cursor(m_menu_start_x+8, m_menu_start_y+19) << "  "
            << Term::move_cursor(m_menu_start_x+9, m_menu_start_y+19) << "  " // clear all lines with possible cursors
            << Term::move_cursor(m_menu_start_x+6 + pos, m_menu_start_y+19) << "<─" << std::flush;
}

void Menu::Main_menu::start() {
    // animate screen
    Visual::animate_title_screen(m_menu_start_x, m_menu_start_y, 2000);

    // menu loop
    bool running = true;
    while(running) {
        switch (m_menu_view) {
            case menu_view::TITLE:
                running = title_menu_view(); // the first screen
                break;
            case menu_view::MAIN:
                running = main_menu_view(); // main menu with all options
                break;
            case menu_view::ABOUT:
                about_menu_view();
                break;
            case menu_view::HELP:
                break;
            case menu_view::SINGLE_PLAYER:
                break;
            case menu_view::MP_MAIN:
                break;
            case menu_view::MP_CREATE:
                break;
            case menu_view::MP_JOIN:
                break;
            case menu_view::MP_CONNECTING:
                break;
            case menu_view::MP_ERROR:
                break;
            case menu_view::MP_START:
                break;
        }
    }
}
bool Menu::Main_menu::title_menu_view() {
    while (true) {
        switch (Term::read_key()) {
            case Term::Key::ESC:
            case Term::Key::CTRL + 'c':
            case 'q':
                return false; // quit the game
            case Term::Key::ENTER: // enter the main menu
                set_new_view(menu_view::MAIN);

                return true;
            default:
                break;
        }
    }
}

bool Menu::Main_menu::main_menu_view() {
    // move the cursor
    uint8_t cursor_state = 0;
    print_cursor(cursor_state);
    bool running = true;
    while(running) {
        switch (Term::read_key()) {
            case 'w':
            case Term::Key::ARROW_UP:
                // arrow up
                if(cursor_state > 0) {
                    cursor_state--;
                    print_cursor(cursor_state);
                }
                break;
            case 's':
            case Term::Key::ARROW_DOWN:
                if(cursor_state < 3) {
                    cursor_state++;
                    print_cursor(cursor_state);
                }
                break;
            case Term::Key::ENTER:
                // option chosen
                running = false;
                break;
            case Term::Key::CTRL + 'c':
            case Term::Key::ESC:
                return false; // quit game
            case 'q':
                set_new_view(menu_view::TITLE);
                return true;
        }
    }
    // set option
    switch (cursor_state) {
        case 0:
            m_menu_view = menu_view::SINGLE_PLAYER;
            break;
        case 1:
            m_menu_view = menu_view::MP_MAIN;
            break;
        case 2:
            m_menu_view = menu_view::HELP;
            break;
        case 3:
            set_new_view(menu_view::ABOUT);
            break;
        default:
            throw std::runtime_error("main_menu_view: tried to start invalid option");
    }
    return true;
}

void Menu::Main_menu::set_new_view(menu_view next_view) {
    switch (m_menu_view) {
        case menu_view::TITLE: // next view is MAIN
            Visual::animate_title_main_menu(m_menu_start_x, m_menu_start_y, 1000);
            break;
        case menu_view::MAIN:
            if(next_view == menu_view::TITLE) {
                Visual::animate_main_title(m_menu_start_x, m_menu_start_y, 2000);
            } else if (next_view == menu_view::ABOUT) {
                Visual::animate_main_to_about(m_menu_start_x, m_menu_start_y, 200);
            }
            break;
        case menu_view::ABOUT: // next_view is always MAIN
            Visual::animate_about_to_main(m_menu_start_x, m_menu_start_y, 200);
            break;
        case menu_view::HELP:
            break;
        case menu_view::SINGLE_PLAYER:
            break;
        case menu_view::MP_MAIN:
            break;
        case menu_view::MP_CREATE:
            break;
        case menu_view::MP_JOIN:
            break;
        case menu_view::MP_CONNECTING:
            break;
        case menu_view::MP_ERROR:
            break;
        case menu_view::MP_START:
            break;
    }
    // set new view
    m_menu_view = next_view;
}
bool Menu::Main_menu::about_menu_view() {
    while(true) {
        switch (Term::read_key()) {
            case Term::Key::ESC:
            case Term::Key::CTRL + 'c':
                return false; // user quit the game
            case 'q':
            case Term::Key::ENTER:
                set_new_view(menu_view::MAIN); // go back to the main screen
                return true;
        }
    }
}