#include <console/chess_tui.hpp>
#include <iostream>
#include <cpp-terminal/base.hpp>
#include "cpp-terminal/window.hpp"
#include <cpp-terminal/input.hpp>
std::string Chess_tui::Menu::get_print_piece(uint8_t x, uint8_t y) {
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
    throw std::runtime_error("invalid piece");
}
std::string Chess_tui::Menu::get_field_color(uint8_t field_x, uint8_t field_y, Term::bg field_color) {
    // movement piece color
    if(field_x == m_selected_cursor_x && field_y == m_selected_cursor_y && m_movement_mode) {
        return Term::color(Term::bg::cyan);
    }
    // movement cursor on possible move
    //if (field_x == m_selected_cursor_x && field_y == m_selected_cursor_y && m_movement_mode && chess.can_move(cursor_x, cursor_y, field_x, field_y)) {
        //   return Term::color(Term::bg::bright_green);
    //}
    //  cursor
    else if(field_x == cursor_x && field_y == cursor_y) {
        return Term::color(turn_color == Chess::Piece_color::white ? Term::bg::bright_blue : Term::bg::blue);
    }
    // cursor on possible move
    //else if() {
    //    return Term::color(Term::bg::bright_green);
    //}
    // possible move
    else if(chess.can_move(cursor_x, cursor_y, field_x, field_y) && chess.get_color(cursor_x, cursor_y) == turn_color) {
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
std::string Chess_tui::Menu::get_field(uint8_t x, uint8_t y, Term::bg field_color) {
    return get_field_color(x, y, field_color).append(get_print_piece(x, y)).append(Term::color(Term::bg::reset));
}

Chess_tui::Menu::Menu(int _start_x, int _start_y)  : start_x{_start_x}, start_y{_start_y}{
        // init chess field
    chess.init_game();
    // init own values
    first_move = true;
    turn_color = Chess::Piece_color::white;
    // draw the field
    render();
}
void Chess_tui::Menu::render() {
    std::cout << Term::clear_screen();

    std::cout << Term::move_cursor(start_y, start_x)
            << "    A B C D E F G H"
            << Term::move_cursor(start_y+1, start_x)
            << "  ┌──────────────────┐"
            << Term::move_cursor(start_y+2, start_x)
            << "8 │ " << get_field(0, 7, Term::bg::black)
            << get_field(1, 7, Term::bg::yellow)
            << get_field(2, 7, Term::bg::black)
            << get_field(3, 7, Term::bg::yellow)
            << get_field(4, 7, Term::bg::black)
            << get_field(5, 7, Term::bg::yellow)
            << get_field(6, 7, Term::bg::black)
            << get_field(7, 7, Term::bg::yellow)
            << " │ 8"
            << Term::move_cursor(start_y+3, start_x)
            << "7 │ " << get_field(0, 6, Term::bg::yellow)
            << get_field(1, 6, Term::bg::black)
            << get_field(2, 6, Term::bg::yellow)
            << get_field(3, 6, Term::bg::black)
            << get_field(4, 6, Term::bg::yellow)
            << get_field(5, 6, Term::bg::black)
            << get_field(6, 6, Term::bg::yellow)
            << get_field(7, 6, Term::bg::black)
            << " │ 7"
            << Term::move_cursor(start_y+4, start_x)
            << "6 │ " << get_field(0, 5, Term::bg::black)
            << get_field(1, 5, Term::bg::yellow)
            << get_field(2, 5, Term::bg::black)
            << get_field(3, 5, Term::bg::yellow)
            << get_field(4, 5, Term::bg::black)
            << get_field(5, 5, Term::bg::yellow)
            << get_field(6, 5, Term::bg::black)
            << get_field(7, 5, Term::bg::yellow)
            << " │ 6"
            << Term::move_cursor(start_y+5, start_x)
            << "5 │ " << get_field(0, 4, Term::bg::yellow)
            << get_field(1, 4, Term::bg::black)
            << get_field(2, 4, Term::bg::yellow)
            << get_field(3, 4, Term::bg::black)
            << get_field(4, 4, Term::bg::yellow)
            << get_field(5, 4, Term::bg::black)
            << get_field(6, 4, Term::bg::yellow)
            << get_field(7, 4, Term::bg::black)
            << " │ 5"
            << Term::move_cursor(start_y+6, start_x)
            << "4 │ " << get_field(0, 3, Term::bg::black)
            << get_field(1, 3, Term::bg::yellow)
            << get_field(2, 3, Term::bg::black)
            << get_field(3, 3, Term::bg::yellow)
            << get_field(4, 3, Term::bg::black)
            << get_field(5, 3, Term::bg::yellow)
            << get_field(6, 3, Term::bg::black)
            << get_field(7, 3, Term::bg::yellow)
            << " │ 4"
            << Term::move_cursor(start_y+7, start_x)
            << "3 │ " << get_field(0, 2, Term::bg::yellow)
            << get_field(1, 2, Term::bg::black)
            << get_field(2, 2, Term::bg::yellow)
            << get_field(3, 2, Term::bg::black)
            << get_field(4, 2, Term::bg::yellow)
            << get_field(5, 2, Term::bg::black)
            << get_field(6, 2, Term::bg::yellow)
            << get_field(7, 2, Term::bg::black)
            << " │ 3"
            << Term::move_cursor(start_y+8, start_x)
            << "2 │ " << get_field(0, 1, Term::bg::black)
            << get_field(1, 1, Term::bg::yellow)
            << get_field(2, 1, Term::bg::black)
            << get_field(3, 1, Term::bg::yellow)
            << get_field(4, 1, Term::bg::black)
            << get_field(5, 1, Term::bg::yellow)
            << get_field(6, 1, Term::bg::black)
            << get_field(7, 1, Term::bg::yellow)
            << " │ 2"
            << Term::move_cursor(start_y+9, start_x)
            << "1 │ " << get_field(0, 0, Term::bg::yellow)
            << get_field(1, 0, Term::bg::black)
            << get_field(2, 0, Term::bg::yellow)
            << get_field(3, 0, Term::bg::black)
            << get_field(4, 0, Term::bg::yellow)
            << get_field(5, 0, Term::bg::black)
            << get_field(6, 0, Term::bg::yellow)
            << get_field(7, 0, Term::bg::black)
            << " │ 1"
            << Term::move_cursor(start_y+10, start_x)
            << "  └──────────────────┘"
            << Term::move_cursor(start_y+11, start_x)
            << "    A B C D E F G H";

    std::cout << std::flush;
}
Chess_tui::Input Chess_tui::Menu::get_input() {
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
        case Term::Key::ENTER:
            return Input::SELECT;
        default:
            return Input::NONE;
    }
}

bool Chess_tui::Menu::tick() {
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
            if(turn_color == Chess::Piece_color::black && cursor_y < 7) {cursor_y++;}
            render();
            return true;
        case Input::BLACK_DOWN:
            if(turn_color == Chess::Piece_color::black && cursor_y > 0) {cursor_y--;}
            render();
            return true;
        case Input::BLACK_LEFT:
            if(turn_color == Chess::Piece_color::black && cursor_x > 0) {cursor_x--;}
            render();
            return true;
        case Input::BLACK_RIGHT:
            if(turn_color == Chess::Piece_color::black && cursor_x < 7) {cursor_x++;}
            render();
            return true;
        case Input::PAUSE:
            // TODO: enter pause menu
            break;
        case Input::SELECT:
            // TODO: enter piece move
            enter_move_mode();
            if(game_over) { // quit on game over
                return false;
            }
            render();
            return true;
        case Input::QUIT:
            return false;
    }
    // isn't accessible
    return false;
}

void Chess_tui::Menu::enter_move_mode() {
    m_movement_mode = true;
    // set the cursor
    m_selected_cursor_x = cursor_x;
    m_selected_cursor_y = cursor_y;

    render();

    bool moving = true;
    while(moving) {
        switch (get_input()) {
            case Input::NONE:
                break;
            case Input::WHITE_UP:
                if(turn_color == Chess::Piece_color::white && m_selected_cursor_y < 7) {m_selected_cursor_y++;}
                render();
                break;
            case Input::WHITE_DOWN:
                if(turn_color == Chess::Piece_color::white && m_selected_cursor_y > 0) {m_selected_cursor_y--;}
                render();
                break;
            case Input::WHITE_LEFT:
                if(turn_color == Chess::Piece_color::white && m_selected_cursor_x > 0) {m_selected_cursor_x--;}
                render();
                break;
            case Input::WHITE_RIGHT:
                if(turn_color == Chess::Piece_color::white && m_selected_cursor_x < 7) {m_selected_cursor_x++;}
                render();
                break;
            case Input::BLACK_UP:
                if(turn_color == Chess::Piece_color::black && m_selected_cursor_y < 7) {m_selected_cursor_y++;}
                render();
                break;
            case Input::BLACK_DOWN:
                if(turn_color == Chess::Piece_color::black && m_selected_cursor_y > 0) {m_selected_cursor_y--;}
                render();
                break;
            case Input::BLACK_LEFT:
                if(turn_color == Chess::Piece_color::black && m_selected_cursor_x > 0) {m_selected_cursor_x--;}
                render();
                break;
            case Input::BLACK_RIGHT:
                if(turn_color == Chess::Piece_color::black && m_selected_cursor_x < 7) {m_selected_cursor_x++;}
                render();
                break;
            case Input::PAUSE:
                break;
            case Input::QUIT:
                moving = false;
                break;
            case Input::SELECT:
                if(move_piece(cursor_x, cursor_y, m_selected_cursor_x, m_selected_cursor_y)) {
                    moving = false;
                    if(turn_color == Chess::Piece_color::white) {turn_color = Chess::Piece_color::black;}
                    else {turn_color = Chess::Piece_color::white;}
                    // enter loose screen if the game is over
                    if(game_over) {
                        game_over_screen();
                    }
                }
                break;
        }
    }
    m_movement_mode = false;
}

bool Chess_tui::Menu::move_piece(uint8_t from_x, uint8_t from_y, uint8_t to_x, uint8_t to_y) {
    switch(chess.do_move(from_x, from_y, to_x, to_y, turn_color)) {
        case Chess::Game_state::SUCCESS:
            return true;
        case Chess::Game_state::INVALID:
            break;
        case Chess::Game_state::STALEMATE:
        case Chess::Game_state::DRAW:
            stalemate = true;
        case Chess::Game_state::CHECKMATE:
            game_over = true;
            return true;
    }
    return false;
}

void Chess_tui::Menu::start() {
    bool running = true;
    while(running) {
        running = tick();
    }
}

void Chess_tui::Menu::game_over_screen() {
    std::cout << Term::clear_screen()
            << Term::move_cursor(start_y, start_x)
            << "    A B C D E F G H"
            << Term::move_cursor(start_y+1, start_x)
            << "  ┌──────────────────┐"
            << Term::move_cursor(start_y+2, start_x)
            << "8 │                  │ 8"
            << Term::move_cursor(start_y+3, start_x)
            << "7 │                  │ 7"
            << Term::move_cursor(start_y+4, start_x)
            << "6 │    " << get_color_string() << "    │ 6"
            << Term::move_cursor(start_y+5, start_x)
            << "5 │    ──────────    │ 5"
            << Term::move_cursor(start_y+6, start_x)
            << "4 │                  │ 4"
            << Term::move_cursor(start_y+7, start_x)
            << "3 │     > Back <     │ 3"
            << Term::move_cursor(start_y+8, start_x)
            << "2 │                  │ 2"
            << Term::move_cursor(start_y+9, start_x)
            << "1 │                  │ 1"
            << Term::move_cursor(start_y+10, start_x)
            << "  └──────────────────┘"
            << Term::move_cursor(start_y+11, start_x)
            << "    A B C D E F G H" << std::flush;

    Term::read_key(); // wait for a key press
}
std::string Chess_tui::Menu::get_color_string() {
    if (stalemate) {
        return "Stale mate";
    }
    if(turn_color == Chess::Piece_color::white) {
        return "White Wins";
    }
    return "Black Wins";
}