# list of sourcefiles
set(chess_source chess_class.cpp)

add_library(chesslib ${chess_source})
target_link_libraries(chesslib foxspace)
target_include_directories(chesslib PUBLIC ${PROJECT_SOURCE_DIR} ${PROJECT_BINARY_DIR})
set_target_properties(chesslib PROPERTIES
        PUBLIC_HEADER "chess/chess_class.hpp")
