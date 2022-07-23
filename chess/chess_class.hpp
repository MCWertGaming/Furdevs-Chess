#pragma once
#include <cstdint>

namespace Chess {
    enum class Piece {
        empty,
        pawn,
        rook,
        bishop,
        knight,
        king,
        queen
    };
    enum class Piece_color {
        empty,
        white = 10,
        black = 20
    };
    enum class Piece_extra {
        empty,
        castling_possible = 100
    };
    enum class Game_state {
        SUCCESS,
        INVALID,
        CHECKMATE,
        STALEMATE,
        DRAW
    };
    // holds field coordinates
    struct Cords {
        uint8_t x, y;
    };

    class Chess {
    private:
        // uint8_t can hold 0-255
        uint8_t m_Chess_field[8][8]{};
        // indicates if en-passant is possible for this round, used by can_pawn_move()
        // TODO: implement
        bool m_en_passant_possible = false;
        // indicates if en-passant is possible in the next move, used by move_piece()
        // TODO: implement function
        bool m_en_passant_done = false;
        // stores the en passant location of the last moved pawn, (x,y), used by can_pawn_move()
        // TODO: Implement
        uint8_t m_en_passant_location[2]{};

    public: // TODO: Make private? (testing needed)
        Piece get_piece(uint8_t x, uint8_t y);
        Piece_color get_color(uint8_t x, uint8_t y);
        Piece_extra get_extra(uint8_t x, uint8_t y);
        void set_piece(uint8_t x, uint8_t y, Piece piece, Piece_color color, Piece_extra extra);
        void remove_piece(uint8_t x, uint8_t y);

        // checks if the piece on the given position can move to the destination
        bool can_move(uint8_t from_x, uint8_t from_y, uint8_t to_x, uint8_t to_y);
        // unified function for choosing the right movement rules for the given piece
        bool can_auto_move(uint8_t from_x, uint8_t from_y, uint8_t to_x, uint8_t to_y);
        // checks if the pawn can move to the destination
        bool can_pawn_move(uint8_t from_x, uint8_t from_y, uint8_t to_x, uint8_t to_y);
        // checks if the rook can move to the destination
        bool can_rook_move(uint8_t from_x, uint8_t from_y, uint8_t to_x, uint8_t to_y);
        // checks if the bishop can move to the destination
        bool can_bishop_move(uint8_t from_x, uint8_t from_y, uint8_t to_x, uint8_t to_y);
        // checks if the knight can move to the given direction
        static bool can_knight_move(uint8_t from_x, uint8_t from_y, uint8_t to_x, uint8_t to_y);
        // checks if the king can move to the given direction
        static bool can_king_move(uint8_t from_x, uint8_t from_y, uint8_t to_x, uint8_t to_y);
        // check if the queen can move to the given direction
        bool can_queen_move(uint8_t from_x, uint8_t from_y, uint8_t to_x, uint8_t to_y);

        // find the king of the given color
        Cords find_king(Piece_color color);
        // find the piece that causes check
        Cords find_enemy(Cords king, Piece_color color);
        // check if the king is in danger on its current position
        bool king_in_danger(Piece_color color);
        // checks if the king would be in danger when the piece is moved
        bool king_in_danger(uint8_t from_x, uint8_t from_y, uint8_t to_x, uint8_t to_y, Piece_color color);

        // check if it's checkmate
        bool check_checkmate(Piece_color color);
        // check if it's stalemate
        bool check_stalemate();
        // check for draw
        bool check_draw();

        // creates an empty field
        void init_empty();
        // prepares the game startup
        void init_game();
        // moves a piece and returns the game state
        Game_state do_move(uint8_t from_x, uint8_t from_y, uint8_t to_x, uint8_t to_y, Piece_color color);



    public:
        Chess() = default;
        ~Chess() = default;

    };
    inline int8_t mk_vector(uint8_t x, uint8_t y) {
        return (int8_t)(x - y);
    }
}