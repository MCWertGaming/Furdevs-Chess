add_library(menulib chess_tui.cpp visual.cpp menu.cpp)
target_link_libraries(menulib foxspace cpp-terminal chesslib)
target_include_directories(menulib PUBLIC ${PROJECT_SOURCE_DIR} ${PROJECT_BINARY_DIR})
set_target_properties(menulib PROPERTIES
        PUBLIC_HEADER "console/menu.hpp")

add_executable(main-game main.cpp)
target_link_libraries(main-game chesslib menulib cpp-terminal)
