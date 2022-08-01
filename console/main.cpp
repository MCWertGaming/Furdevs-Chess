#include <iostream>
#include <console/chess_tui.hpp>
#include <cpp-terminal/base.hpp>
#include "visual.hpp"
#include "menu.hpp"

int main() {
    // prepare the terminal
    Term::Terminal term(true, true, false, true);

    int rows, cols;
    Term::get_term_size(rows, cols);

    // make the term size uneven
    if(rows % 2 == 0) {
        rows--;
    }
    if(cols % 2 == 0) {
        cols--;
    }

    Menu::Main_menu mainMenu;
    mainMenu.start();

    return 0;
}
