#include "chess_class.hpp"
#include <stdexcept>

Chess::Piece Chess::Chess::get_piece(uint8_t x, uint8_t y) {
    // avoid reading foreign memory
    if(x >= 8 || y >= 8){
        throw std::runtime_error("get_piece: coordinates are not in the field");
    }
    uint8_t field_val = m_Chess_field[x][y];
    // remove extra information
    field_val = field_val - (uint8_t)get_extra(x,y);
    field_val = field_val - (uint8_t)get_color(x,y);

    switch (field_val) {
        case (uint8_t)Piece::pawn:
            return Piece::pawn;
        case (uint8_t)Piece::bishop:
            return Piece::bishop;
        case (uint8_t)Piece::king:
            return Piece::king;
        case (uint8_t)Piece::knight:
            return Piece::knight;
        case (uint8_t)Piece::queen:
            return Piece::queen;
        case (uint8_t)Piece::rook:
            return Piece::rook;
        case (uint8_t)Piece::empty:
            return Piece::empty;
        default:
            throw std::runtime_error("get_piece: read invalid input from field");
    }
}

Chess::Piece_color Chess::Chess::get_color(uint8_t x, uint8_t y) {
    // avoid reading foreign memory
    if(x >= 8 || y >= 8){
        throw std::runtime_error("get_color: coordinates are not in the field");
    }
    uint8_t field_val = m_Chess_field[x][y];
    // remove extra information
    if(get_extra(x,y) != Piece_extra::empty) {
        field_val = field_val - 100;
    }
    // get the value
    if(field_val > (uint8_t)Piece_color::black) {
        return Piece_color::black;
    } else if(field_val > (uint8_t)Piece_color::white) {
        return Piece_color::white;
    } else {
        return Piece_color::empty;
    }
}
Chess::Piece_extra Chess::Chess::get_extra(uint8_t x, uint8_t y) {
    // avoid reading foreign memory
    if(x >= 8 || y >= 8){
        throw std::runtime_error("get_extra: coordinates are not in the field");
    }
    // TODO don't copy if possible
    uint8_t field_val = m_Chess_field[x][y];
    if(field_val > (uint8_t)Piece_extra::castling_possible) {
        return Piece_extra::castling_possible;
    } else {
        return Piece_extra::empty;
    }
}

void Chess::Chess::set_piece(uint8_t x, uint8_t y, Piece piece, Piece_color color, Piece_extra extra) {
    // avoid memory corruption on wrongly calculated coordinates
    if(x >= 8 || y >= 8) {
        throw std::runtime_error("set_piece: coordinates are not in the field");
    }
    // make sure that colors are not dangling around
    else if (piece == Piece::empty && color != Piece_color::empty) {
        throw std::runtime_error("set_piece: can't create an empty piece with a color");
    }
    // also make sure that extra information are not dangling around
    else if(piece == Piece::empty && extra != Piece_extra::empty) {
        throw std::runtime_error("set_piece: can't create an empty piece with extra meta");
    }
    // also make sure that pieces aren't missing colors
    else if(piece != Piece::empty && color == Piece_color::empty) {
        throw std::runtime_error("set_piece: can't create a piece without a color");
    }
    uint8_t piece_val = 0;
    // set the piece ID
    switch(piece) {
        case Piece::empty:
            piece_val = 0;
            break;
        case Piece::pawn:
            piece_val = 1;
            break;
        case Piece::rook:
            piece_val = 2;
            break;
        case Piece::bishop:
            piece_val = 3;
            break;
        case Piece::knight:
            piece_val = 4;
            break;
        case Piece::king:
            piece_val = 5;
            break;
        case Piece::queen:
            piece_val = 6;
            break;
    }
    // set the piece color
    switch (color) {
        case Piece_color::empty:
            piece_val = 0;
            break;
        case Piece_color::white:
            piece_val += 10;
            break;
        case Piece_color::black:
            piece_val += 20;
            break;
    }
    // set extra flags
    // TODO: Add en passant
    switch (extra) {
        case Piece_extra::empty: // nothing must be added
            break;
        case Piece_extra::castling_possible:
            piece_val += 100;
            break;
    }
    // set the field
    m_Chess_field[x][y] = piece_val;
}
void Chess::Chess::remove_piece(uint8_t x, uint8_t y) {
    // avoid memory corruption on wrongly calculated coordinates
    if(x >= 8 || y >= 8) {
        throw std::runtime_error("set_piece: coordinates are not in the field");
    }
    m_Chess_field[x][y] = 0; // 0 represents an empty field
}
bool Chess::Chess::can_auto_move(uint8_t from_x, uint8_t from_y, uint8_t to_x, uint8_t to_y) {
    switch(get_piece(from_x, from_y)) {
        case Piece::empty:
            return false;
        case Piece::pawn:
            if(!can_pawn_move(from_x, from_y, to_x, to_y)) {return false;}
            break;
        case Piece::rook:
            if(!can_rook_move(from_x, from_y, to_x, to_y)) {return false;}
            break;
        case Piece::bishop:
            if(!can_bishop_move(from_x, from_y, to_x, to_y)) {return false;}
            break;
        case Piece::knight:
            if(!can_knight_move(from_x, from_y, to_x, to_y)) {return false;}
            break;
        case Piece::king:
            if(!can_king_move(from_x, from_y, to_x, to_y)) {return false;}
            break;
        case Piece::queen:
            if(!can_queen_move(from_x, from_y, to_x, to_y)) {return false;}
            break;
    }
    return true;
}
bool Chess::Chess::can_move(uint8_t from_x, uint8_t from_y, uint8_t to_x, uint8_t to_y) {
    // check if the destination is free
    if(get_piece(to_x, to_y) != Piece::empty && get_color(from_x, from_y) == get_color(to_x, to_y)) {
        return false;
    }
    // skip if no movement happens
    else if(from_x == to_x && from_y == to_y) {
        return false;
    }

    // check if the piece can move
    if(!can_auto_move(from_x, from_y, to_x, to_y)) {
        return false;
    }
        // check if the move put's the king into danger
        if(king_in_danger(from_x, from_y, to_x, to_y, get_color(from_x, from_y))) {
            return false;
        }

    // TODO: en passant, needs refactor of can_pawn_move, just copy the pawn location into a var
    // TODO: castling in the king movement
    // TODO: Check for checkmate
    // TODO: Check for stalemate
    // TODO: Promotion
    

    return true;
}
Chess::Game_state Chess::Chess::do_move(uint8_t from_x, uint8_t from_y, uint8_t to_x, uint8_t to_y, Piece_color color) {

}

bool Chess::Chess::can_pawn_move(uint8_t from_x, uint8_t from_y, uint8_t to_x, uint8_t to_y) {
    // check which color the piece has
    int8_t direction;
    switch(get_color(from_x, from_y)) {
        case Piece_color::empty:
            return false; // no piece exists to be moved
        case Piece_color::white:
            direction = -1;
            break;
        case Piece_color::black:
            direction = 1;
            break;
    }

    int8_t x_vec = mk_vector(from_x, to_x);
    int8_t y_vec = mk_vector(from_y, to_y);
    Piece destination = get_piece(to_x, to_y);

    if(x_vec == 0 && y_vec == direction) {
        // pawn moved one forward
        // check if the destination is empty
        if(destination == Piece::empty) {
            return true;
        }
        // the destination is blocked by another piece
        return false;
    } else if (x_vec == 0 && y_vec == direction * 2 && (from_y == 1 || from_y == 6)) {
        // pawn moved two forward
        // check if the destination is empty and if the filed between is empty too
        if(destination == Piece::empty && get_piece(from_x, from_y + direction) == Piece::empty) {
            // set the on passant value
            m_en_passant_done = true;
            m_en_passant_location[0] = from_x;
            m_en_passant_location[1] = from_y + direction;
            return true;
        }
        // the destination is blocked by another piece
        return false;
    } else if (y_vec == direction && (x_vec == 1 || x_vec == -1)) {
        // pawn takes enemy piece
        // check if the destination includes an enemy
        if(get_color(to_x, to_y) != get_color(from_x, from_y) && get_color(to_x, to_y) != Piece_color::empty) {
            // the piece on the destination will be taken
            return true;
        }
        // check if the pawn is doing en passant
        else if(m_en_passant_possible && m_en_passant_location[0] == to_x, m_en_passant_location[1] == to_y) {
            return true;
        }
        return false;
    }
    return false;
}
// TODO: Refactor
bool Chess::Chess::can_rook_move(uint8_t from_x, uint8_t from_y, uint8_t to_x, uint8_t to_y) {
    // check if the direction is correct
    int8_t vector_x = mk_vector(from_x, to_x);
    int8_t vector_y = mk_vector(from_y, to_y);
    if(vector_x != 0 && vector_y != 0) {
        return false;
    }
    // range calculation
    uint8_t range, dir_x, dir_y;
    if(vector_x + vector_y > 0) {
        range = vector_x + vector_y;
        // calculate the direction
        dir_x = vector_x > 0 ? -1 : 0;
        dir_y = vector_y > 0 ? -1 : 0;
    } else {
        range = -(vector_x + vector_y);
        // calculate the direction
        dir_x = vector_x < 0 ? 1 : 0;
        dir_y = vector_y < 0 ? 1 : 0;
    }
    // check if any pieces are in the way
    for(uint8_t i = 1; i < range; i++) {
        if(get_piece(from_x + (i * dir_x), from_y + (i * dir_y)) != Piece::empty) {
            return false;
        }
    }
    // all checks passed, move is valid
    return true;
}
bool Chess::Chess::can_bishop_move(uint8_t from_x, uint8_t from_y, uint8_t to_x, uint8_t to_y) {
    // check if the direction is right
    if(mk_vector(from_x, to_x) != mk_vector(from_y, to_y) &&
            mk_vector(from_x, to_x) != -mk_vector(from_y, to_y)) {
        return false;
    }
    // calculate range
    // vector_x is always equal to vector_y
    uint8_t range = mk_vector(from_x, to_x) > 0 ? mk_vector(from_x, to_x) : -mk_vector(from_x, to_x);
    // calculate direction
    // the vector can't be 0
    int8_t dir_x = mk_vector(from_x, to_x) > 0 ? -1 : 1;
    int8_t dir_y = mk_vector(from_y, to_y) > 0 ? -1 : 1;
    // check if there are pieces in the way
    for(uint8_t i = 1; i < range; i++) {
        if(get_piece(from_x + (i * dir_x), from_y + (i * dir_y)) != Piece::empty) {
            return false;
        }
    }
    // move is possible
    return true;
}
bool Chess::Chess::can_knight_move(uint8_t from_x, uint8_t from_y, uint8_t to_x, uint8_t to_y) {
    // create movement vectors and make sure they are positive
    uint8_t vector_x = mk_vector(from_x, to_x) > 0 ? mk_vector(from_x, to_x) : -mk_vector(from_x, to_x);
    uint8_t vector_y = mk_vector(from_y, to_y) > 0 ? mk_vector(from_y, to_y) : -mk_vector(from_y, to_y);
    // check if the movement vectors are correct
    if(!((vector_x == 2 && vector_y == 1) || (vector_x == 1 && vector_y == 2))) {
        return false;
    }
    // move is possible
    return true;
}
bool Chess::Chess::can_king_move(uint8_t from_x, uint8_t from_y, uint8_t to_x, uint8_t to_y) {
    // create movement vectors and make sure they are positive
    uint8_t vector_x = mk_vector(from_x, to_x) > 0 ? mk_vector(from_x, to_x) : -mk_vector(from_x, to_x);
    uint8_t vector_y = mk_vector(from_y, to_y) > 0 ? mk_vector(from_y, to_y) : -mk_vector(from_y, to_y);
    // check the movement
    if(!(vector_x + vector_y == 1 || vector_x + vector_y == 2)) {
        return false;
    }
    // movement possible
    return true;
}
bool Chess::Chess::can_queen_move(uint8_t from_x, uint8_t from_y, uint8_t to_x, uint8_t to_y) {
    // the movement is combined from other pieces
    return can_rook_move(from_x, from_y, to_x, to_y) || can_bishop_move(from_x, from_y, to_x, to_y);
}

Chess::Cords Chess::Chess::find_king(Piece_color color) {
    for(uint8_t i = 0; i < 8; i++) {
        for(uint8_t j = 0; j < 8; j++) {
            if(get_piece(i, j) == Piece::king && get_color(i, j) == color) {
                return Cords{i, j};
            }
        }
    }
    throw std::runtime_error("find_king: no king found!");
}
Chess::Cords Chess::Chess::find_enemy(Cords king, Piece_color color) {
    // search for enemy pieces
    for(uint8_t i = 0; i < 8; i++) {
        for(uint8_t j = 0; j < 8; j++) {
            // check if the found piece is from the enemy and not a king
            if(get_piece(i, j) != Piece::king && get_color(i, j) != color) {
                // check if the piece can reach the king
                if(can_move(i, j, king.x, king.y)) {
                    return Cords{i, j};
                }
            }
        }
    }
    throw std::runtime_error("find_enemy: no enemy found!");
}

bool Chess::Chess::king_in_danger(Piece_color color) {
    // find kind
    Cords king = find_king(color);
    // go through the field and check if a piece can reach the king
    for(uint8_t i = 0; i < 8; i++) {
        for(uint8_t j = 0; j < 8; j++) {
            // check if the field holds a piece of the opposite color
            if(get_color(i, j) != color) {
                // check if it can reach the king
                if (can_auto_move(i, j, king.x, king.y)) {
                    // piece and take the king
                    return true;
                }
            }
        }
    }
    // king can't be captured
    return false;
}
bool Chess::Chess::king_in_danger(uint8_t from_x, uint8_t from_y, uint8_t to_x, uint8_t to_y, Piece_color color) {
    // perform the move to check if the king keeps being in danger

    // copy the current value of the field
    uint8_t old_val = m_Chess_field[to_x][to_y];
    // perform the move
    m_Chess_field[to_x][to_y] = m_Chess_field[from_x][from_y];
    m_Chess_field[from_x][from_y] = 0;

    // check if the king is in danger
    bool danger = king_in_danger(color);

    // revert move
    m_Chess_field[from_x][from_y] = m_Chess_field[to_x][to_y];
    m_Chess_field[to_x][to_y] = old_val;

    // return the result
    return danger;
}
bool Chess::Chess::check_checkmate(Piece_color color) {
    // find the king
    Cords king = find_king(color);
    // check if the king can move
    if(can_move(king.x, king.y, king.x+1, king.y) ||
       can_move(king.x, king.y, king.x+1, king.y+1) ||
            can_move(king.x, king.y, king.x, king.y+1) ||
            can_move(king.x, king.y, king.x-1, king.y+1) ||
            can_move(king.x, king.y, king.x-1, king.y) ||
            can_move(king.x, king.y, king.x-1, king.y-1) ||
            can_move(king.x, king.y, king.x+1, king.y-1)) {
        // the king can move away
        return false;
    }
    // find the opponent
    // TODO: finish
}



void Chess::Chess::init_empty() {
    for (uint8_t i = 0; i < 8; i++){
        for (uint8_t j = 0; j < 8; j++) {
            set_piece(i, j, Piece::empty, Piece_color::empty, Piece_extra::empty);
        }
    }
}
