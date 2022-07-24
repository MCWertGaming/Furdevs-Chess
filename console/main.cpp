#include <iostream>
#include <console/menu.hpp>
#include <cpp-terminal/base.hpp>

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

    // start the menu
    Menu::Menu menu;

    menu.start();




    return 0;
}
