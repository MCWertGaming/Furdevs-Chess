#include <gtest/gtest.h>
#include <chess/chess_class.hpp>

TEST(chess_class_test, piece_creation_error) {
    Chess::Chess chess;
    // check for error on going out of the field (this would result in undefined behavior)
    EXPECT_THROW(chess.set_piece(8, 0, Chess::Piece::empty, Chess::Piece_color::empty, Chess::Piece_extra::empty), std::runtime_error);
    EXPECT_THROW(chess.set_piece(0, 8, Chess::Piece::empty, Chess::Piece_color::empty, Chess::Piece_extra::empty), std::runtime_error);
    // check for error when attributes are added wrongly
    EXPECT_THROW(chess.set_piece(0, 0, Chess::Piece::empty, Chess::Piece_color::black, Chess::Piece_extra::empty), std::runtime_error);
    EXPECT_THROW(chess.set_piece(0, 0, Chess::Piece::empty, Chess::Piece_color::white, Chess::Piece_extra::empty), std::runtime_error);
    EXPECT_THROW(chess.set_piece(0, 0, Chess::Piece::empty, Chess::Piece_color::empty, Chess::Piece_extra::castling_possible), std::runtime_error);
    // check if attributes are mossing
    EXPECT_THROW(chess.set_piece(0, 0, Chess::Piece::pawn, Chess::Piece_color::empty, Chess::Piece_extra::empty), std::runtime_error);
    EXPECT_THROW(chess.set_piece(0, 0, Chess::Piece::queen, Chess::Piece_color::empty, Chess::Piece_extra::empty), std::runtime_error);
    EXPECT_THROW(chess.set_piece(0, 0, Chess::Piece::knight, Chess::Piece_color::empty, Chess::Piece_extra::empty), std::runtime_error);
    EXPECT_THROW(chess.set_piece(0, 0, Chess::Piece::queen, Chess::Piece_color::empty, Chess::Piece_extra::empty), std::runtime_error);
    EXPECT_THROW(chess.set_piece(0, 0, Chess::Piece::bishop, Chess::Piece_color::empty, Chess::Piece_extra::empty), std::runtime_error);
    EXPECT_THROW(chess.set_piece(0, 0, Chess::Piece::rook, Chess::Piece_color::empty, Chess::Piece_extra::empty), std::runtime_error);
    EXPECT_THROW(chess.set_piece(0, 0, Chess::Piece::king, Chess::Piece_color::empty, Chess::Piece_extra::empty), std::runtime_error);
}

TEST(chess_class_test, piece_creation_empty) {
    Chess::Chess chess;
    // make sure everything is empty
    for(uint8_t i = 0; i < 8; i++) {
        for(uint8_t j = 0; j < 8; j++) {
            EXPECT_NO_THROW(chess.set_piece(i, j, Chess::Piece::empty, Chess::Piece_color::empty, Chess::Piece_extra::empty));
        }
    }
    // check if everything is empty
    for(uint8_t i = 0; i < 8; i++) {
        for(uint8_t j = 0; j < 8; j++) {
            EXPECT_EQ(chess.get_piece(i, j), Chess::Piece::empty);
            EXPECT_EQ(chess.get_color(i, j), Chess::Piece_color::empty);
            EXPECT_EQ(chess.get_extra(i, j), Chess::Piece_extra::empty);
        }
    }
}

TEST(chess_class_test, piece_creation_pawn_white) {
    Chess::Chess chess;
    // make sure everything is empty
    for(uint8_t i = 0; i < 8; i++) {
        for(uint8_t j = 0; j < 8; j++) {
            EXPECT_NO_THROW(chess.set_piece(i, j, Chess::Piece::pawn, Chess::Piece_color::white, Chess::Piece_extra::empty));
        }
    }
    // check if everything is empty
    for(uint8_t i = 0; i < 8; i++) {
        for(uint8_t j = 0; j < 8; j++) {
            EXPECT_EQ(chess.get_piece(i, j), Chess::Piece::pawn);
            EXPECT_EQ(chess.get_color(i, j), Chess::Piece_color::white);
            EXPECT_EQ(chess.get_extra(i, j), Chess::Piece_extra::empty);
        }
    }
}
TEST(chess_class_test, piece_creation_pawn_black) {
    Chess::Chess chess;
    // make sure everything is empty
    for(uint8_t i = 0; i < 8; i++) {
        for(uint8_t j = 0; j < 8; j++) {
            EXPECT_NO_THROW(chess.set_piece(i, j, Chess::Piece::pawn, Chess::Piece_color::black, Chess::Piece_extra::empty));
        }
    }
    // check if everything is empty
    for(uint8_t i = 0; i < 8; i++) {
        for(uint8_t j = 0; j < 8; j++) {
            EXPECT_EQ(chess.get_piece(i, j), Chess::Piece::pawn);
            EXPECT_EQ(chess.get_color(i, j), Chess::Piece_color::black);
            EXPECT_EQ(chess.get_extra(i, j), Chess::Piece_extra::empty);
        }
    }
}
TEST(chess_class_test, piece_creation_queen_white) {
    Chess::Chess chess;
    // make sure everything is empty
    for(uint8_t i = 0; i < 8; i++) {
        for(uint8_t j = 0; j < 8; j++) {
            EXPECT_NO_THROW(chess.set_piece(i, j, Chess::Piece::queen, Chess::Piece_color::white, Chess::Piece_extra::empty));
        }
    }
    // check if everything is empty
    for(uint8_t i = 0; i < 8; i++) {
        for(uint8_t j = 0; j < 8; j++) {
            EXPECT_EQ(chess.get_piece(i, j), Chess::Piece::queen);
            EXPECT_EQ(chess.get_color(i, j), Chess::Piece_color::white);
            EXPECT_EQ(chess.get_extra(i, j), Chess::Piece_extra::empty);
        }
    }
}
TEST(chess_class_test, piece_creation_queen_black) {
    Chess::Chess chess;
    // make sure everything is empty
    for(uint8_t i = 0; i < 8; i++) {
        for(uint8_t j = 0; j < 8; j++) {
            EXPECT_NO_THROW(chess.set_piece(i, j, Chess::Piece::queen, Chess::Piece_color::black, Chess::Piece_extra::empty));
        }
    }
    // check if everything is empty
    for(uint8_t i = 0; i < 8; i++) {
        for(uint8_t j = 0; j < 8; j++) {
            EXPECT_EQ(chess.get_piece(i, j), Chess::Piece::queen);
            EXPECT_EQ(chess.get_color(i, j), Chess::Piece_color::black);
            EXPECT_EQ(chess.get_extra(i, j), Chess::Piece_extra::empty);
        }
    }
}
TEST(chess_class_test, piece_creation_king_white) {
    Chess::Chess chess;
    // make sure everything is empty
    for(uint8_t i = 0; i < 8; i++) {
        for(uint8_t j = 0; j < 8; j++) {
            EXPECT_NO_THROW(chess.set_piece(i, j, Chess::Piece::king, Chess::Piece_color::white, Chess::Piece_extra::empty));
        }
    }
    // check if everything is empty
    for(uint8_t i = 0; i < 8; i++) {
        for(uint8_t j = 0; j < 8; j++) {
            EXPECT_EQ(chess.get_piece(i, j), Chess::Piece::king);
            EXPECT_EQ(chess.get_color(i, j), Chess::Piece_color::white);
            EXPECT_EQ(chess.get_extra(i, j), Chess::Piece_extra::empty);
        }
    }
}
TEST(chess_class_test, piece_creation_king_black) {
    Chess::Chess chess;
    // make sure everything is empty
    for(uint8_t i = 0; i < 8; i++) {
        for(uint8_t j = 0; j < 8; j++) {
            EXPECT_NO_THROW(chess.set_piece(i, j, Chess::Piece::king, Chess::Piece_color::black, Chess::Piece_extra::empty));
        }
    }
    // check if everything is empty
    for(uint8_t i = 0; i < 8; i++) {
        for(uint8_t j = 0; j < 8; j++) {
            EXPECT_EQ(chess.get_piece(i, j), Chess::Piece::king);
            EXPECT_EQ(chess.get_color(i, j), Chess::Piece_color::black);
            EXPECT_EQ(chess.get_extra(i, j), Chess::Piece_extra::empty);
        }
    }
}
//
TEST(chess_class_test, piece_creation_rook_white) {
    Chess::Chess chess;
    // make sure everything is empty
    for(uint8_t i = 0; i < 8; i++) {
        for(uint8_t j = 0; j < 8; j++) {
            EXPECT_NO_THROW(chess.set_piece(i, j, Chess::Piece::rook, Chess::Piece_color::white, Chess::Piece_extra::empty));
        }
    }
    // check if everything is empty
    for(uint8_t i = 0; i < 8; i++) {
        for(uint8_t j = 0; j < 8; j++) {
            EXPECT_EQ(chess.get_piece(i, j), Chess::Piece::rook);
            EXPECT_EQ(chess.get_color(i, j), Chess::Piece_color::white);
            EXPECT_EQ(chess.get_extra(i, j), Chess::Piece_extra::empty);
        }
    }
}
TEST(chess_class_test, piece_creation_rook_black) {
    Chess::Chess chess;
    // make sure everything is empty
    for(uint8_t i = 0; i < 8; i++) {
        for(uint8_t j = 0; j < 8; j++) {
            EXPECT_NO_THROW(chess.set_piece(i, j, Chess::Piece::rook, Chess::Piece_color::black, Chess::Piece_extra::empty));
        }
    }
    // check if everything is empty
    for(uint8_t i = 0; i < 8; i++) {
        for(uint8_t j = 0; j < 8; j++) {
            EXPECT_EQ(chess.get_piece(i, j), Chess::Piece::rook);
            EXPECT_EQ(chess.get_color(i, j), Chess::Piece_color::black);
            EXPECT_EQ(chess.get_extra(i, j), Chess::Piece_extra::empty);
        }
    }
}
TEST(chess_class_test, piece_creation_bishop_white) {
    Chess::Chess chess;
    // make sure everything is empty
    for(uint8_t i = 0; i < 8; i++) {
        for(uint8_t j = 0; j < 8; j++) {
            EXPECT_NO_THROW(chess.set_piece(i, j, Chess::Piece::bishop, Chess::Piece_color::white, Chess::Piece_extra::empty));
        }
    }
    // check if everything is empty
    for(uint8_t i = 0; i < 8; i++) {
        for(uint8_t j = 0; j < 8; j++) {
            EXPECT_EQ(chess.get_piece(i, j), Chess::Piece::bishop);
            EXPECT_EQ(chess.get_color(i, j), Chess::Piece_color::white);
            EXPECT_EQ(chess.get_extra(i, j), Chess::Piece_extra::empty);
        }
    }
}
TEST(chess_class_test, piece_creation_bishop_black) {
    Chess::Chess chess;
    // make sure everything is empty
    for(uint8_t i = 0; i < 8; i++) {
        for(uint8_t j = 0; j < 8; j++) {
            EXPECT_NO_THROW(chess.set_piece(i, j, Chess::Piece::bishop, Chess::Piece_color::black, Chess::Piece_extra::empty));
        }
    }
    // check if everything is empty
    for(uint8_t i = 0; i < 8; i++) {
        for(uint8_t j = 0; j < 8; j++) {
            EXPECT_EQ(chess.get_piece(i, j), Chess::Piece::bishop);
            EXPECT_EQ(chess.get_color(i, j), Chess::Piece_color::black);
            EXPECT_EQ(chess.get_extra(i, j), Chess::Piece_extra::empty);
        }
    }
}
TEST(chess_class_test, piece_creation_knight_white) {
    Chess::Chess chess;
    // make sure everything is empty
    for(uint8_t i = 0; i < 8; i++) {
        for(uint8_t j = 0; j < 8; j++) {
            EXPECT_NO_THROW(chess.set_piece(i, j, Chess::Piece::knight, Chess::Piece_color::white, Chess::Piece_extra::empty));
        }
    }
    // check if everything is empty
    for(uint8_t i = 0; i < 8; i++) {
        for(uint8_t j = 0; j < 8; j++) {
            EXPECT_EQ(chess.get_piece(i, j), Chess::Piece::knight);
            EXPECT_EQ(chess.get_color(i, j), Chess::Piece_color::white);
            EXPECT_EQ(chess.get_extra(i, j), Chess::Piece_extra::empty);
        }
    }
}
TEST(chess_class_test, piece_creation_knight_black) {
    Chess::Chess chess;
    // make sure everything is empty
    for(uint8_t i = 0; i < 8; i++) {
        for(uint8_t j = 0; j < 8; j++) {
            EXPECT_NO_THROW(chess.set_piece(i, j, Chess::Piece::knight, Chess::Piece_color::black, Chess::Piece_extra::empty));
        }
    }
    // check if everything is empty
    for(uint8_t i = 0; i < 8; i++) {
        for(uint8_t j = 0; j < 8; j++) {
            EXPECT_EQ(chess.get_piece(i, j), Chess::Piece::knight);
            EXPECT_EQ(chess.get_color(i, j), Chess::Piece_color::black);
            EXPECT_EQ(chess.get_extra(i, j), Chess::Piece_extra::empty);
        }
    }
}
//
TEST(chess_class_test, init_empty) {
    Chess::Chess chess;
    // make the field full of pawns
    for(uint8_t i = 0; i < 8; i++) {
        for(uint8_t j = 0; j < 8; j++) {
            EXPECT_NO_THROW(chess.set_piece(i, j, Chess::Piece::pawn, Chess::Piece_color::white, Chess::Piece_extra::empty));
        }
    }
    // clear the field
    chess.init_empty();

    // check if everything is empty
    for(uint8_t i = 0; i < 8; i++) {
        for(uint8_t j = 0; j < 8; j++) {
            EXPECT_EQ(chess.get_piece(i, j), Chess::Piece::empty);
            EXPECT_EQ(chess.get_color(i, j), Chess::Piece_color::empty);
            EXPECT_EQ(chess.get_extra(i, j), Chess::Piece_extra::empty);
        }
    }
}
TEST(chess_class_test, piece_remove) {
    Chess::Chess chess;
    // place pawns on the whole field
    for(uint8_t i = 0; i < 8; i++) {
        for(uint8_t j = 0; j < 8; j++) {
            EXPECT_NO_THROW(chess.set_piece(i, j, Chess::Piece::pawn, Chess::Piece_color::white, Chess::Piece_extra::empty));
        }
    }
    // remove all pieces
    for(uint8_t i = 0; i < 8; i++) {
        for(uint8_t j = 0; j < 8; j++) {
            EXPECT_NO_THROW(chess.remove_piece(i, j));
        }
    }
    // remove all check if all fields are empty
    for(uint8_t i = 0; i < 8; i++) {
        for(uint8_t j = 0; j < 8; j++) {
            EXPECT_EQ(chess.get_piece(i, j), Chess::Piece::empty);
            EXPECT_EQ(chess.get_color(i, j), Chess::Piece_color::empty);
            EXPECT_EQ(chess.get_extra(i, j), Chess::Piece_extra::empty);
        }
    }
}

TEST(chess_class_test, pawn_movement_check_white) {
    Chess::Chess chess;
    // create a few test pieces
    EXPECT_NO_THROW(chess.init_empty());
    EXPECT_NO_THROW(chess.set_piece(0, 1, Chess::Piece::pawn, Chess::Piece_color::white, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(0, 1, Chess::Piece::pawn, Chess::Piece_color::white, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(1, 1, Chess::Piece::pawn, Chess::Piece_color::white, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(2, 1, Chess::Piece::pawn, Chess::Piece_color::white, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(3, 1, Chess::Piece::pawn, Chess::Piece_color::white, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(4, 1, Chess::Piece::pawn, Chess::Piece_color::white, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(0, 2, Chess::Piece::pawn, Chess::Piece_color::white, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(4, 2, Chess::Piece::pawn, Chess::Piece_color::white, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(4, 3, Chess::Piece::pawn, Chess::Piece_color::white, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(1, 5, Chess::Piece::pawn, Chess::Piece_color::white, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(0, 6, Chess::Piece::pawn, Chess::Piece_color::black, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(2, 6, Chess::Piece::pawn, Chess::Piece_color::black, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(0, 0, Chess::Piece::king, Chess::Piece_color::white, Chess::Piece_extra::empty));
    /*     0 1 2 3 4 5 6 7 X
     * 0 |
     * 1 | P P P P P
     * 2 | P       P
     * 3 |         P
     * 4 |
     * 5 |   P
     * 6 | B   B
     * 7 |
     * Y
     */

    // check movements
    EXPECT_FALSE(chess.can_move(0,1,0,2, true)); // go onto pawn
    EXPECT_FALSE(chess.can_move(0, 1, 0, 3, true)); // go through pawn
    EXPECT_TRUE(chess.can_move(1, 1, 1, 2, true)); // move one forward
    EXPECT_TRUE(chess.can_move(1, 1, 1, 3, true)); // move two forward
    EXPECT_FALSE(chess.can_move(4, 1, 4, 2, true)); // move one forward onto pawn
    EXPECT_FALSE(chess.can_move(4, 1, 4, 3, true)); // go through and onto pawn
    EXPECT_TRUE(chess.can_move(1, 5, 0, 6, true)); // capture enemy pawn
    EXPECT_TRUE(chess.can_move(1, 5, 2, 6, true)); // capture enemy pawn
    EXPECT_FALSE(chess.can_move(2, 1, 1, 2, true)); // go one field diagonally
    EXPECT_FALSE(chess.can_move(2, 1, 3, 2, true)); // go one field diagonally
    EXPECT_FALSE(chess.can_move(1, 5, 1, 4, true)); // go backward
}
TEST(chess_class_test, pawn_movement_check_black) {
    Chess::Chess chess;
    // create a few test pieces
    EXPECT_NO_THROW(chess.init_empty());
    EXPECT_NO_THROW(chess.set_piece(0, 6, Chess::Piece::pawn, Chess::Piece_color::black, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(0, 5, Chess::Piece::pawn, Chess::Piece_color::black, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(1, 6, Chess::Piece::pawn, Chess::Piece_color::black, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(2, 6, Chess::Piece::pawn, Chess::Piece_color::black, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(3, 6, Chess::Piece::pawn, Chess::Piece_color::black, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(4, 6, Chess::Piece::pawn, Chess::Piece_color::black, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(0, 5, Chess::Piece::pawn, Chess::Piece_color::black, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(4, 5, Chess::Piece::pawn, Chess::Piece_color::black, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(4, 4, Chess::Piece::pawn, Chess::Piece_color::black, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(1, 2, Chess::Piece::pawn, Chess::Piece_color::black, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(0, 1, Chess::Piece::pawn, Chess::Piece_color::white, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(2, 1, Chess::Piece::pawn, Chess::Piece_color::white, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(0, 7, Chess::Piece::king, Chess::Piece_color::black, Chess::Piece_extra::empty));
    /*     0 1 2 3 4 5 6 7 X
     * 0 |
     * 1 | B   B
     * 2 |   P
     * 3 |
     * 4 |         P
     * 5 | P       P
     * 6 | P P P P P
     * 7 |
     * Y
     */

    // check movements
    EXPECT_FALSE(chess.can_move(0,6,0,5, true)); // go onto pawn
    EXPECT_FALSE(chess.can_move(0, 6, 0, 4, true)); // go through pawn
    EXPECT_TRUE(chess.can_move(1, 6, 1, 5, true)); // move one forward
    EXPECT_TRUE(chess.can_move(1, 6, 1, 4, true)); // move two forward
    EXPECT_FALSE(chess.can_move(4, 6, 4, 5, true)); // move one forward onto pawn
    EXPECT_FALSE(chess.can_move(4, 6, 4, 4, true)); // go through and onto pawn
    EXPECT_TRUE(chess.can_move(1, 2, 0, 1, true)); // capture enemy pawn
    EXPECT_TRUE(chess.can_move(1, 2, 2, 1, true)); // capture enemy pawn
    EXPECT_FALSE(chess.can_move(2, 6, 1, 5, true)); // go one field diagonally
    EXPECT_FALSE(chess.can_move(2, 6, 3, 5, true)); // go one field diagonally
}
TEST(chess_class_test, rook_movement_check_white) {
    Chess::Chess chess;

    EXPECT_NO_THROW(chess.set_piece(0, 3, Chess::Piece::pawn, Chess::Piece_color::white, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(0, 7, Chess::Piece::rook, Chess::Piece_color::white, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(1, 7, Chess::Piece::pawn, Chess::Piece_color::white, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(3, 5, Chess::Piece::rook, Chess::Piece_color::white, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(3, 1, Chess::Piece::pawn, Chess::Piece_color::black, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(5, 5, Chess::Piece::pawn, Chess::Piece_color::black, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(5, 3, Chess::Piece::queen, Chess::Piece_color::black, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(7, 5, Chess::Piece::bishop, Chess::Piece_color::black, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(1, 0, Chess::Piece::king, Chess::Piece_color::white, Chess::Piece_extra::empty));

    /*     0 1 2 3 4 5 6 7 X
     * 0 |
     * 1 |       B
     * 2 |
     * 3 | P         B
     * 4 |
     * 5 |       R   B   B
     * 6 |
     * 7 | R P
     * Y
     */

    EXPECT_FALSE(chess.can_move(0, 7, 1, 7, true)); // move onto own pawn
    EXPECT_TRUE(chess.can_move(0, 7, 0, 5, true)); // move up
    EXPECT_FALSE(chess.can_move(0, 7, 0, 3, true)); // move onto own pawn
    EXPECT_FALSE(chess.can_move(0, 7, 0, 0, true)); // move through own pawn
    EXPECT_TRUE(chess.can_move(3, 5, 5, 5, true)); // take opponent piece
    EXPECT_TRUE(chess.can_move(3, 5, 3, 1, true)); // take opponent
    EXPECT_TRUE(chess.can_move(3, 5, 0, 5, true)); // move left
    EXPECT_TRUE(chess.can_move(3, 5, 3, 6, true)); // move down
    EXPECT_TRUE(chess.can_move(3, 5, 3, 7, true)); // move down
    EXPECT_FALSE(chess.can_move(3, 5, 3, 0, true)); // move through opponent
    EXPECT_FALSE(chess.can_move(3, 5, 7, 5, true)); // move through opponent
    EXPECT_TRUE(chess.can_move(3, 5, 4, 5, true)); // move right
    // remove pawn
    EXPECT_NO_THROW(chess.remove_piece(0, 3));
    EXPECT_NO_THROW(chess.remove_piece(1, 7));
    // check if the rook can move the longest distance possible
    EXPECT_TRUE(chess.can_move(0, 7, 0, 0, true)); // move up
    EXPECT_TRUE(chess.can_move(0, 7, 7, 7, true)); // move right

}
TEST(chess_class_test, rook_movement_check_black) {
    Chess::Chess chess;

    EXPECT_NO_THROW(chess.set_piece(0, 0, Chess::Piece::rook, Chess::Piece_color::black, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(1, 0, Chess::Piece::pawn, Chess::Piece_color::black, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(0, 4, Chess::Piece::pawn, Chess::Piece_color::black, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(3, 2, Chess::Piece::rook, Chess::Piece_color::black, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(3, 6, Chess::Piece::pawn, Chess::Piece_color::white, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(5, 2, Chess::Piece::pawn, Chess::Piece_color::white, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(5, 4, Chess::Piece::queen, Chess::Piece_color::white, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(7, 2, Chess::Piece::bishop, Chess::Piece_color::white, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(7, 7, Chess::Piece::king, Chess::Piece_color::black, Chess::Piece_extra::empty));

    /*     0 1 2 3 4 5 6 7 X
     * 0 | R P
     * 1 |
     * 2 |       R   B   B
     * 3 |
     * 4 | P         B
     * 5 |
     * 6 |       B
     * 7 |
     * Y
     */

    EXPECT_FALSE(chess.can_move(0, 0, 1, 0, true)); // move onto own pawn
    EXPECT_TRUE(chess.can_move(0, 0, 0, 3, true)); // move up
    EXPECT_FALSE(chess.can_move(0, 0, 0, 4, true)); // move onto own pawn
    EXPECT_FALSE(chess.can_move(0, 0, 0, 5, true)); // move through own pawn
    EXPECT_TRUE(chess.can_move(3, 2, 5, 2, true)); // take opponent piece
    EXPECT_TRUE(chess.can_move(3, 2, 3, 6, true)); // take opponent
    EXPECT_TRUE(chess.can_move(3, 2, 0, 2, true)); // move left
    EXPECT_TRUE(chess.can_move(3, 2, 3, 3, true)); // move down
    EXPECT_TRUE(chess.can_move(3, 2, 3, 4, true)); // move down
    EXPECT_FALSE(chess.can_move(3, 2, 3, 7, true)); // move through opponent
    EXPECT_FALSE(chess.can_move(3, 2, 7, 4, true)); // move through opponent
    EXPECT_TRUE(chess.can_move(3, 2, 4, 2, true)); // move right
}
TEST(chess_class_test, bishop_movement_check_white) {
    Chess::Chess chess;
    EXPECT_NO_THROW(chess.set_piece(0, 7, Chess::Piece::bishop, Chess::Piece_color::white, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(1, 0, Chess::Piece::pawn, Chess::Piece_color::black, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(2, 3, Chess::Piece::queen, Chess::Piece_color::black, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(2, 5, Chess::Piece::pawn, Chess::Piece_color::white, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(3, 2, Chess::Piece::bishop, Chess::Piece_color::white, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(0, 0, Chess::Piece::king, Chess::Piece_color::white, Chess::Piece_extra::empty));

    /*     0 1 2 3 4 5 6 7 X
     * 0 |   B
     * 1 |
     * 2 |       W
     * 3 |     B
     * 4 |
     * 5 |     P
     * 6 |
     * 7 | W
     * Y
     */
    EXPECT_FALSE(chess.can_move(0, 7, 0, 6, true)); // move up
    EXPECT_TRUE(chess.can_move(0, 7, 1, 6, true)); // move one field up right
    EXPECT_FALSE(chess.can_move(0, 7, 2, 5, true)); // move onto own piece
    EXPECT_FALSE(chess.can_move(0, 7, 3, 4, true)); // move through piece
    EXPECT_TRUE(chess.can_move(3, 2, 1, 0, true)); // take enemy piece
    EXPECT_TRUE(chess.can_move(3, 2, 2, 1, true)); // move up left
    EXPECT_TRUE(chess.can_move(3, 2, 2, 3, true)); // move down left and take piece
    EXPECT_TRUE(chess.can_move(3, 2, 4, 1, true)); // move up right
    EXPECT_TRUE(chess.can_move(3, 2, 4, 3, true)); // move down right
    EXPECT_TRUE(chess.can_move(3, 2, 7, 6, true)); // move down right
}
TEST(chess_class_test, bishop_movement_check_black) {
    Chess::Chess chess;
    EXPECT_NO_THROW(chess.set_piece(0, 1, Chess::Piece::bishop, Chess::Piece_color::black, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(1, 7, Chess::Piece::pawn, Chess::Piece_color::white, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(2, 4, Chess::Piece::queen, Chess::Piece_color::white, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(2, 3, Chess::Piece::pawn, Chess::Piece_color::black, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(3, 5, Chess::Piece::bishop, Chess::Piece_color::black, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(0, 0, Chess::Piece::king, Chess::Piece_color::black, Chess::Piece_extra::empty));
    /*     0 1 2 3 4 5 6 7 X
     * 0 |
     * 1 | W
     * 2 |     P
     * 3 |
     * 4 |     B
     * 5 |       W
     * 6 |
     * 7 |   B
     * Y
     */
    EXPECT_FALSE(chess.can_move(0, 1, 0, 2, true)); // move up
    EXPECT_TRUE(chess.can_move(0, 1, 1, 2, true)); // move one field up right
    EXPECT_FALSE(chess.can_move(0, 1, 2, 2, true)); // move onto own piece
    EXPECT_FALSE(chess.can_move(0, 1, 3, 3, true)); // move through piece
    EXPECT_TRUE(chess.can_move(3, 5, 1, 7, true)); // take enemy piece
    EXPECT_TRUE(chess.can_move(3, 5, 2, 6, true)); // move up left
    EXPECT_TRUE(chess.can_move(3, 5, 2, 4, true)); // move down left and take piece
    EXPECT_TRUE(chess.can_move(3, 5, 4, 6, true)); // move up right
    EXPECT_TRUE(chess.can_move(3, 5, 4, 4, true)); // move down right
    EXPECT_TRUE(chess.can_move(3, 5, 7, 1, true)); // move down right
}
TEST(chess_class_test, knight_movement_check_white) {
    Chess::Chess chess;
    EXPECT_NO_THROW(chess.set_piece(3, 4, Chess::Piece::knight, Chess::Piece_color::white, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(0, 0, Chess::Piece::knight, Chess::Piece_color::white, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(2, 1, Chess::Piece::pawn, Chess::Piece_color::black, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(1, 2, Chess::Piece::queen, Chess::Piece_color::black, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(0, 7, Chess::Piece::king, Chess::Piece_color::white, Chess::Piece_extra::empty));

    /*     0 1 2 3 4 5 6 7 X
     * 0 | K
     * 1 |     B
     * 2 |   B X   X
     * 3 |   X       X
     * 4 |       K
     * 5 |   X       X
     * 6 |     X   X
     * 7 |
     * Y
     */

    EXPECT_TRUE(chess.can_move(3, 4, 1, 3, true));
    EXPECT_TRUE(chess.can_move(3, 4, 1, 5, true));
    EXPECT_TRUE(chess.can_move(3, 4, 2, 6, true));
    EXPECT_TRUE(chess.can_move(3, 4, 4, 6, true));
    EXPECT_TRUE(chess.can_move(3, 4, 5, 5, true));
    EXPECT_TRUE(chess.can_move(3, 4, 5, 3, true));
    EXPECT_TRUE(chess.can_move(3, 4, 4, 2, true));
    EXPECT_TRUE(chess.can_move(3, 4, 2, 2, true));
    EXPECT_TRUE(chess.can_move(0, 0, 2, 1, true));
    EXPECT_TRUE(chess.can_move(0, 0, 1, 2, true));
    EXPECT_FALSE(chess.can_move(3, 4, 1, 4, true));
    EXPECT_FALSE(chess.can_move(3, 4, 0, 0, true));
    EXPECT_FALSE(chess.can_move(0, 0, 3, 0, true));
}
TEST(chess_class_test, knight_movement_check_black) {
    Chess::Chess chess;
    EXPECT_NO_THROW(chess.set_piece(3, 4, Chess::Piece::knight, Chess::Piece_color::black, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(0, 0, Chess::Piece::knight, Chess::Piece_color::black, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(2, 1, Chess::Piece::pawn, Chess::Piece_color::white, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(1, 2, Chess::Piece::queen, Chess::Piece_color::white, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(0, 7, Chess::Piece::king, Chess::Piece_color::black, Chess::Piece_extra::empty));

    /*     0 1 2 3 4 5 6 7 X
     * 0 | K
     * 1 |     B
     * 2 |   B X   X
     * 3 |   X       X
     * 4 |       K
     * 5 |   X       X
     * 6 |     X   X
     * 7 |
     * Y
     */

    EXPECT_TRUE(chess.can_move(3, 4, 1, 3, true));
    EXPECT_TRUE(chess.can_move(3, 4, 1, 5, true));
    EXPECT_TRUE(chess.can_move(3, 4, 2, 6, true));
    EXPECT_TRUE(chess.can_move(3, 4, 4, 6, true));
    EXPECT_TRUE(chess.can_move(3, 4, 5, 5, true));
    EXPECT_TRUE(chess.can_move(3, 4, 5, 3, true));
    EXPECT_TRUE(chess.can_move(3, 4, 4, 2, true));
    EXPECT_TRUE(chess.can_move(3, 4, 2, 2, true));
    EXPECT_TRUE(chess.can_move(0, 0, 2, 1, true));
    EXPECT_TRUE(chess.can_move(0, 0, 1, 2, true));
    EXPECT_FALSE(chess.can_move(3, 4, 1, 4, true));
    EXPECT_FALSE(chess.can_move(3, 4, 0, 0, true));
    EXPECT_FALSE(chess.can_move(0, 0, 3, 0, true));
}
TEST(chess_class_test, king_movement_check_white) {
    Chess::Chess chess;
    EXPECT_NO_THROW(chess.set_piece(3, 3, Chess::Piece::king, Chess::Piece_color::white, Chess::Piece_extra::empty));

    EXPECT_TRUE(chess.can_move(3, 3, 3, 4, true));
    EXPECT_TRUE(chess.can_move(3, 3, 4, 4, true));
    EXPECT_TRUE(chess.can_move(3, 3, 4, 3, true));
    EXPECT_TRUE(chess.can_move(3, 3, 4, 2, true));
    EXPECT_TRUE(chess.can_move(3, 3, 3, 2, true));
    EXPECT_TRUE(chess.can_move(3, 3, 2, 2, true));
    EXPECT_TRUE(chess.can_move(3, 3, 3, 4, true));
    EXPECT_TRUE(chess.can_move(3, 3, 2, 3, true));
    EXPECT_TRUE(chess.can_move(3, 3, 2, 4, true));
}
TEST(chess_class_test, king_movement_check_black) {
    Chess::Chess chess;
    EXPECT_NO_THROW(chess.set_piece(3, 3, Chess::Piece::king, Chess::Piece_color::black, Chess::Piece_extra::empty));

    EXPECT_TRUE(chess.can_move(3, 3, 3, 4, true));
    EXPECT_TRUE(chess.can_move(3, 3, 4, 4, true));
    EXPECT_TRUE(chess.can_move(3, 3, 4, 3, true));
    EXPECT_TRUE(chess.can_move(3, 3, 4, 2, true));
    EXPECT_TRUE(chess.can_move(3, 3, 3, 2, true));
    EXPECT_TRUE(chess.can_move(3, 3, 2, 2, true));
    EXPECT_TRUE(chess.can_move(3, 3, 3, 4, true));
    EXPECT_TRUE(chess.can_move(3, 3, 2, 3, true));
    EXPECT_TRUE(chess.can_move(3, 3, 2, 4, true));
}
TEST(chess_class_test, queen_movement_check_white) {
    Chess::Chess chess;
    EXPECT_NO_THROW(chess.set_piece(4, 4, Chess::Piece::queen, Chess::Piece_color::white, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(4, 1, Chess::Piece::pawn, Chess::Piece_color::white, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(1, 1, Chess::Piece::rook, Chess::Piece_color::white, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(1, 4, Chess::Piece::rook, Chess::Piece_color::black, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(2, 6, Chess::Piece::pawn, Chess::Piece_color::black, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(7, 7, Chess::Piece::king, Chess::Piece_color::white, Chess::Piece_extra::empty));

    /*     0 1 2 3 4 5 6 7 X
     * 0 |
     * 1 |   W     W
     * 2 |
     * 3 |
     * 4 |   B     Q
     * 5 |
     * 6 |     B
     * 7 |
     * Y
     */
    EXPECT_FALSE(chess.can_move(4,4,4,1, true)); // move onto own piece
    EXPECT_TRUE(chess.can_move(4,4,1,4, true)); // move onto enemy piece
    EXPECT_TRUE(chess.can_move(4,4,2,6, true)); // move onto enemy piece
    EXPECT_FALSE(chess.can_move(4,4,1,7, true)); // move through piece
    EXPECT_FALSE(chess.can_move(4,4,1,1, true)); // move onto own piece
    EXPECT_FALSE(chess.can_move(4,4,0,0, true)); // move through own piece
    EXPECT_TRUE(chess.can_move(4,4,7,4, true)); // move right
    EXPECT_FALSE(chess.can_move(4,4,0,4, true)); // move through piece
}
TEST(chess_class_test, queen_movement_check_black) {
Chess::Chess chess;
EXPECT_NO_THROW(chess.set_piece(4, 4, Chess::Piece::queen, Chess::Piece_color::black, Chess::Piece_extra::empty));
EXPECT_NO_THROW(chess.set_piece(4, 1, Chess::Piece::pawn, Chess::Piece_color::black, Chess::Piece_extra::empty));
EXPECT_NO_THROW(chess.set_piece(1, 1, Chess::Piece::rook, Chess::Piece_color::black, Chess::Piece_extra::empty));
EXPECT_NO_THROW(chess.set_piece(1, 4, Chess::Piece::rook, Chess::Piece_color::white, Chess::Piece_extra::empty));
EXPECT_NO_THROW(chess.set_piece(2, 6, Chess::Piece::pawn, Chess::Piece_color::white, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(7, 7, Chess::Piece::king, Chess::Piece_color::black, Chess::Piece_extra::empty));

/*     0 1 2 3 4 5 6 7 X
 * 0 |
 * 1 |   W     W
 * 2 |
 * 3 |
 * 4 |   B     Q
 * 5 |
 * 6 |     B
 * 7 |
 * Y
 */
EXPECT_FALSE(chess.can_move(4,4,4,1, true)); // move onto own piece
EXPECT_TRUE(chess.can_move(4,4,1,4, true)); // move onto enemy piece
EXPECT_TRUE(chess.can_move(4,4,2,6, true)); // move onto enemy piece
EXPECT_FALSE(chess.can_move(4,4,1,7, true)); // move through piece
EXPECT_FALSE(chess.can_move(4,4,1,1, true)); // move onto own piece
EXPECT_FALSE(chess.can_move(4,4,0,0, true)); // move through own piece
EXPECT_TRUE(chess.can_move(4,4,7,4, true)); // move right
EXPECT_FALSE(chess.can_move(4,4,0,4, true)); // move through piece
}
TEST(chess_class_test, king_in_danger_check_white) {
    Chess::Chess chess;
    EXPECT_NO_THROW(chess.set_piece(0,0,Chess::Piece::king, Chess::Piece_color::white, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(0, 7, Chess::Piece::rook, Chess::Piece_color::black, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(7,7,Chess::Piece::king, Chess::Piece_color::black, Chess::Piece_extra::empty));
    // check if the king is in check
    EXPECT_TRUE(chess.king_in_danger(Chess::Piece_color::white));
    // check if pieces with the own color are wrongly detected
    EXPECT_NO_THROW(chess.set_piece(0, 7, Chess::Piece::rook, Chess::Piece_color::white, Chess::Piece_extra::empty));
    EXPECT_FALSE(chess.king_in_danger(Chess::Piece_color::white));
}
TEST(chess_class_test, king_in_danger_check_black) {
    Chess::Chess chess;
    EXPECT_NO_THROW(chess.set_piece(0,0,Chess::Piece::king, Chess::Piece_color::black, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(0, 7, Chess::Piece::rook, Chess::Piece_color::white, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(7,7,Chess::Piece::king, Chess::Piece_color::white, Chess::Piece_extra::empty));
    // check if the king is in check
    EXPECT_TRUE(chess.king_in_danger(Chess::Piece_color::black));
    // check if pieces with the own color are wrongly detected
    EXPECT_NO_THROW(chess.set_piece(0, 7, Chess::Piece::rook, Chess::Piece_color::black, Chess::Piece_extra::empty));
    EXPECT_FALSE(chess.king_in_danger(Chess::Piece_color::black));
}
TEST(chess_class_test, king_in_danger_after_move_white) {
    Chess::Chess chess;
    EXPECT_NO_THROW(chess.set_piece(0,0, Chess::Piece::king, Chess::Piece_color::white, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(1,7, Chess::Piece::king, Chess::Piece_color::black, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(2,3, Chess::Piece::queen, Chess::Piece_color::white, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(5,4, Chess::Piece::rook, Chess::Piece_color::black, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(4,6, Chess::Piece::rook, Chess::Piece_color::white, Chess::Piece_extra::empty));

    /*     0 1 2 3 4 5 6 7 X
     * 0 | K             Bk
     * 1 |
     * 2 |
     * 3 |     Q
     * 4 |           BR
     * 5 |
     * 6 |         R
     * 7 |
     * Y
     */
    EXPECT_FALSE(chess.king_in_danger(0,0,1,0,Chess::Piece_color::white)); // move the king
    EXPECT_FALSE(chess.king_in_danger(4,6,0,6,Chess::Piece_color::white)); // move friendly rook
    EXPECT_FALSE(chess.king_in_danger(4,6,7,6,Chess::Piece_color::white)); // set opponent in danger

    // place a piece to set the king into danger
    EXPECT_NO_THROW(chess.set_piece(0, 7, Chess::Piece::rook, Chess::Piece_color::black, Chess::Piece_extra::empty));
    // make sure the king is in danger
    EXPECT_TRUE(chess.king_in_danger(Chess::Piece_color::white));
    // check if moving the king away helps
    EXPECT_FALSE(chess.king_in_danger(0,0,1,0,Chess::Piece_color::white));
    // check if moving the queen in-between helps
    EXPECT_FALSE(chess.king_in_danger(2, 3, 0, 3, Chess::Piece_color::white));

    // put piece in-between
    EXPECT_NO_THROW(chess.set_piece(0, 5, Chess::Piece::rook, Chess::Piece_color::white, Chess::Piece_extra::empty));
    // check if the piece moving away causes danger
    EXPECT_FALSE(chess.king_in_danger(0,5,0,6,Chess::Piece_color::white));
}
TEST(chess_class_test, king_in_danger_move_piece) {
    Chess::Chess chess;
    EXPECT_NO_THROW(chess.set_piece(0, 0, Chess::Piece::king, Chess::Piece_color::white, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(7, 7, Chess::Piece::king, Chess::Piece_color::black, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(2, 3, Chess::Piece::queen, Chess::Piece_color::white, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(5, 4, Chess::Piece::rook, Chess::Piece_color::black, Chess::Piece_extra::empty));
    EXPECT_NO_THROW(chess.set_piece(4, 6, Chess::Piece::rook, Chess::Piece_color::white, Chess::Piece_extra::empty));

    /*     0 1 2 3 4 5 6 7 X
     * 0 | K             Bk
     * 1 |
     * 2 |
     * 3 |     Q
     * 4 |           BR
     * 5 |
     * 6 |         R
     * 7 |
     * Y
     */
    EXPECT_TRUE(chess.can_move(0, 0, 0, 1, true)); // move the king
    EXPECT_TRUE(chess.can_move(4, 6, 0, 6, true)); // move friendly rook
    EXPECT_TRUE(chess.can_move(4, 6, 7, 6, true)); // set opponent in danger

    // place a piece to set the king into danger
    EXPECT_NO_THROW(chess.set_piece(0, 7, Chess::Piece::rook, Chess::Piece_color::black, Chess::Piece_extra::empty));
    // make sure the king is in danger
    EXPECT_TRUE(chess.king_in_danger(Chess::Piece_color::white));
    // check if moving the king away helps
    EXPECT_FALSE(chess.can_move(0, 0, 0, 1, true));
    // check if moving the queen in-between helps
    EXPECT_TRUE(chess.can_move(2, 3, 0, 3, true));
    // put piece in-between
    EXPECT_NO_THROW(chess.set_piece(0, 5, Chess::Piece::rook, Chess::Piece_color::white, Chess::Piece_extra::empty));
    // check if the piece moving away causes danger
    EXPECT_FALSE(chess.can_move(0, 5, 1, 5, true));
}
TEST(chess_class_test, new_test) {
    //
}