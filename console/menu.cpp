#include <console/menu.hpp>
#include <iostream>
#include <cpp-terminal/base.hpp>
#include "cpp-terminal/window.hpp"
#include <cpp-terminal/input.hpp>

size_t Menu::Menu::get_field_x() {
    return (term_cols - 23) / 2;
}
size_t Menu::Menu::get_field_y() {
    return (term_rows - 12) / 2;
}
size_t Menu::Menu::get_game_x() {
    return get_field_x() - 3;
}
size_t Menu::Menu::get_game_y() {
    return get_field_y() - 1;
}
std::string Menu::Menu::get_print_piece(uint8_t x, uint8_t y) {
    // last moved piece origin indicator
    if(x == last_move_x && y == last_move_y && !first_move) {
        return "x ";
    }
    // check which piece is on the given position
    switch (chess.get_piece(x,y)) {
        case Chess::Piece::empty:
            return "  ";
        case Chess::Piece::pawn:
            return chess.get_color(x,y) == Chess::Piece_color::white ? "♟ " : "♙ ";
        case Chess::Piece::rook:
            return chess.get_color(x,y) == Chess::Piece_color::white ? "♜ " : "♖ ";
        case Chess::Piece::bishop:
            return chess.get_color(x,y) == Chess::Piece_color::white ? "♝ " : "♗ ";
        case Chess::Piece::knight:
            return chess.get_color(x,y) == Chess::Piece_color::white ? "♞ " : "♘ ";
        case Chess::Piece::king:
            return chess.get_color(x,y) == Chess::Piece_color::white ? "♚ " : "♔ ";
        case Chess::Piece::queen:
            return chess.get_color(x,y) == Chess::Piece_color::white ? "♛ " : "♕ ";
    }
}
std::string Menu::Menu::get_field_color(uint8_t field_x, uint8_t field_y, Term::bg field_color) {
    //  cursor
    if(field_x == cursor_x && field_y == cursor_y) {
        return Term::color(turn_color == Chess::Piece_color::white ? Term::bg::bright_blue : Term::bg::blue);
    }
    // possible move
    else if(chess.can_auto_move(cursor_x, cursor_y, field_x, field_y)) {
        return Term::color(Term::bg::green);
    }
    // last moved piece
    else if(field_x == last_dest_x && field_y == last_move_y && !first_move) {
        return Term::color(Term::bg::magenta);
    }
    // check
    else if(chess.get_piece(field_x, field_y) == Chess::Piece::king && chess.get_color(field_x, field_y) == turn_color && chess.king_in_danger(turn_color)) {
        return Term::color(Term::bg::red);
    }
    return Term::color(field_color);
}
std::string Menu::Menu::get_field(uint8_t x, uint8_t y, Term::bg field_color) {
    return get_field_color(x, y, field_color).append(get_print_piece(x, y)).append(Term::color(Term::bg::reset));
}

Menu::Menu::Menu() {
    Term::get_term_size(term_rows, term_cols);
    if (term_rows % 2 == 0) {
        term_rows--;
    }
    if(term_cols % 2 == 0) {
        term_cols--;
    }
    // init chess field
    chess.init_game();
    // init own values
    first_move = true;
    turn_color = Chess::Piece_color::white;
    // draw the field
    render();
}
void Menu::Menu::render() {
    std::cout << Term::clear_screen();

    std::cout << Term::move_cursor(get_field_y(), get_field_x())
            << "    A B C D E F G H"
            << Term::move_cursor(get_field_y()+1, get_field_x())
            << "  ┌──────────────────┐"
            << Term::move_cursor(get_field_y()+2, get_field_x())
            << "8 │ " << get_field(0, 7, Term::bg::black)
            << get_field(1, 7, Term::bg::yellow)
            << get_field(2, 7, Term::bg::black)
            << get_field(3, 7, Term::bg::yellow)
            << get_field(4, 7, Term::bg::black)
            << get_field(5, 7, Term::bg::yellow)
            << get_field(6, 7, Term::bg::black)
            << get_field(7, 7, Term::bg::yellow)
            << " │ 8"
            << Term::move_cursor(get_field_y()+3, get_field_x())
            << "7 │ " << get_field(0, 6, Term::bg::yellow)
            << get_field(1, 6, Term::bg::black)
            << get_field(2, 6, Term::bg::yellow)
            << get_field(3, 6, Term::bg::black)
            << get_field(4, 6, Term::bg::yellow)
            << get_field(5, 6, Term::bg::black)
            << get_field(6, 6, Term::bg::yellow)
            << get_field(7, 6, Term::bg::black)
            << " │ 7"
            << Term::move_cursor(get_field_y()+4, get_field_x())
            << "6 │ " << get_field(0, 5, Term::bg::black)
            << get_field(1, 5, Term::bg::yellow)
            << get_field(2, 5, Term::bg::black)
            << get_field(3, 5, Term::bg::yellow)
            << get_field(4, 5, Term::bg::black)
            << get_field(5, 5, Term::bg::yellow)
            << get_field(6, 5, Term::bg::black)
            << get_field(7, 5, Term::bg::yellow)
            << " │ 6"
            << Term::move_cursor(get_field_y()+5, get_field_x())
            << "5 │ " << get_field(0, 4, Term::bg::yellow)
            << get_field(1, 4, Term::bg::black)
            << get_field(2, 4, Term::bg::yellow)
            << get_field(3, 4, Term::bg::black)
            << get_field(4, 4, Term::bg::yellow)
            << get_field(5, 4, Term::bg::black)
            << get_field(6, 4, Term::bg::yellow)
            << get_field(7, 4, Term::bg::black)
            << " │ 5"
            << Term::move_cursor(get_field_y()+6, get_field_x())
            << "4 │ " << get_field(0, 3, Term::bg::black)
            << get_field(1, 3, Term::bg::yellow)
            << get_field(2, 3, Term::bg::black)
            << get_field(3, 3, Term::bg::yellow)
            << get_field(4, 3, Term::bg::black)
            << get_field(5, 3, Term::bg::yellow)
            << get_field(6, 3, Term::bg::black)
            << get_field(7, 3, Term::bg::yellow)
            << " │ 4"
            << Term::move_cursor(get_field_y()+7, get_field_x())
            << "3 │ " << get_field(0, 2, Term::bg::yellow)
            << get_field(1, 2, Term::bg::black)
            << get_field(2, 2, Term::bg::yellow)
            << get_field(3, 2, Term::bg::black)
            << get_field(4, 2, Term::bg::yellow)
            << get_field(5, 2, Term::bg::black)
            << get_field(6, 2, Term::bg::yellow)
            << get_field(7, 2, Term::bg::black)
            << " │ 3"
            << Term::move_cursor(get_field_y()+8, get_field_x())
            << "2 │ " << get_field(0, 1, Term::bg::black)
            << get_field(1, 1, Term::bg::yellow)
            << get_field(2, 1, Term::bg::black)
            << get_field(3, 1, Term::bg::yellow)
            << get_field(4, 1, Term::bg::black)
            << get_field(5, 1, Term::bg::yellow)
            << get_field(6, 1, Term::bg::black)
            << get_field(7, 1, Term::bg::yellow)
            << " │ 2"
            << Term::move_cursor(get_field_y()+9, get_field_x())
            << "1 │ " << get_field(0, 0, Term::bg::yellow)
            << get_field(1, 0, Term::bg::black)
            << get_field(2, 0, Term::bg::yellow)
            << get_field(3, 0, Term::bg::black)
            << get_field(4, 0, Term::bg::yellow)
            << get_field(5, 0, Term::bg::black)
            << get_field(6, 0, Term::bg::yellow)
            << get_field(7, 0, Term::bg::black)
            << " │ 1"
            << Term::move_cursor(get_field_y()+10, get_field_x())
            << "  └──────────────────┘"
            << Term::move_cursor(get_field_y()+11, get_field_x())
            << "    A B C D E F G H";

    std::cout << Term::move_cursor(1,1) << "cursor pos: " << cursor_x << "," << cursor_y;
    std::cout << std::flush;
}
Menu::Input Menu::Menu::get_input() {
    int input = Term::read_key();
    switch(input) {
        case Term::Key::CTRL + 'c':
        case 'q':
            return Input::QUIT;
        case 'w':
            return Input::WHITE_UP;
        case 'a':
            return Input::WHITE_LEFT;
        case 's':
            return Input::WHITE_DOWN;
        case 'd':
            return Input::WHITE_RIGHT;
        case Term::Key::ARROW_UP:
            return Input::BLACK_UP;
        case Term::Key::ARROW_DOWN:
            return Input::BLACK_DOWN;
        case Term::Key::ARROW_LEFT:
            return Input::BLACK_LEFT;
        case Term::Key::ARROW_RIGHT:
            return Input::BLACK_RIGHT;
        case ' ':
            return Input::PAUSE;
        default:
            return Input::NONE;
    }
}

bool Menu::Menu::tick() {
    switch (get_input()) {
        case Input::NONE:
            return true;
            break;
        case Input::WHITE_UP:
            if(turn_color == Chess::Piece_color::white && cursor_y < 7) {cursor_y++;}
            render();
            return true;
        case Input::WHITE_DOWN:
            if(turn_color == Chess::Piece_color::white && cursor_y > 0) {cursor_y--;}
            render();
            return true;
        case Input::WHITE_LEFT:
            if(turn_color == Chess::Piece_color::white && cursor_x > 0) {cursor_x--;}
            render();
            return true;
        case Input::WHITE_RIGHT:
            if(turn_color == Chess::Piece_color::white && cursor_x < 7) {cursor_x++;}
            render();
            return true;
        case Input::BLACK_UP:
            if(turn_color == Chess::Piece_color::black) {cursor_y++;}
            render();
            return true;
        case Input::BLACK_DOWN:
            if(turn_color == Chess::Piece_color::black) {cursor_y--;}
            render();
            return true;
        case Input::BLACK_LEFT:
            if(turn_color == Chess::Piece_color::black) {cursor_x--;}
            render();
            return true;
        case Input::BLACK_RIGHT:
            if(turn_color == Chess::Piece_color::black) {cursor_x++;}
            render();
            return true;
        case Input::PAUSE:
            // TODO: draw pause menu
            break;
        case Input::QUIT:
            return false;
    }
    // isn't accessible
    return false;
}

void Menu::Menu::start() {
    bool running = true;
    while(running) {
        running = tick();
    }
}
