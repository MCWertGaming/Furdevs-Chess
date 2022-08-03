#pragma once
#include <cstddef>
#include <cstdint>

namespace Menu{
    enum class menu_view{
        TITLE, // first screen after startup
        MAIN, // main menu
        ABOUT, // credits screen
        HELP, // Controls overview
        SINGLE_PLAYER, // starts the game in single player
        MP_MAIN, // main menu for multiplayer, chose Join or create
        MP_CREATE, // shows the game code for others to join
        MP_JOIN, // asks for the code to join match
        MP_CONNECTING, // connection screen while the server waits for both clients to get ready
        MP_ERROR, // error screen when the connection was lost
        MP_START // Game runs in Multiplayer mode
    };
    /* -> Menu Transitions
     * TITLE -> Main
     * Main -> TITLE
     * MAIN -> ABOUT
     * ABOUT -> MAIN
     * MAIN -> HELP
     * HELP -> MAIN
     * MAIN -> SINGLE_PLAYER
     * MAIN -> MP_MAIN
     * MP_MAIN -> MP_CREATE
     * MP_CREATE -> MP_CONNECTING
     * MP_JOIN -> MP_CONNECTING
     * MP_CONNECTING -> MP_ERROR
     * MP_CONNECTING -> MP_START
     */
    class Main_menu {
    private:
        int m_menu_start_x{};
        int m_menu_start_y{};

        // printing utils
        void print_cursor(uint8_t pos);

        // current menu
        menu_view m_menu_view = menu_view::TITLE;

        // menu windows, return false if the game exits
        bool title_menu_view();
        bool main_menu_view();
        bool about_menu_view();
        bool help_menu_view();

        // game wrapper
        bool start_game();

        // helper functions
        void set_new_view(menu_view next_view);
    public:
        Main_menu();
        ~Main_menu() = default;
        void start();
    };
}
