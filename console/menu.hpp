#pragma once
#include <cstddef>
#include <chess/chess_class.hpp>
#include <string>
#include <cpp-terminal/base.hpp>

namespace Menu {
    enum class Input {
        NONE,
        WHITE_UP,
        WHITE_DOWN,
        WHITE_LEFT,
        WHITE_RIGHT,
        BLACK_UP,
        BLACK_DOWN,
        BLACK_LEFT,
        BLACK_RIGHT,
        PAUSE,
        QUIT
    };
    class Menu {
    private:
        void render();
        bool tick();
        int term_rows{}, term_cols{};
        size_t get_field_x();
        size_t get_field_y();
        size_t get_game_x();
        size_t get_game_y();
        std::string get_print_piece(uint8_t x, uint8_t y);
        std::string get_field_color(uint8_t field_x, uint8_t field_y, Term::bg field_color);
        std::string get_field(uint8_t x, uint8_t y, Term::bg);

        // cursor position
        int cursor_x{};
        int cursor_y{};
        // the color that can move
        Chess::Piece_color turn_color;
        // last move origin
        uint8_t last_move_x{};
        uint8_t last_move_y{};
        // last move destination
        uint8_t last_dest_x{};
        uint8_t last_dest_y{};
        // turns of last move indicators on first move
        bool first_move = false;

        // parse input
        static Input get_input();

        // chess field
        Chess::Chess chess;
    public:
        Menu();
        ~Menu() = default;
        void start();
    };
}
