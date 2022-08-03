#include <cpp-terminal/base.hpp>
#include "menu.hpp"

int main() {
    // prepare the terminal
    Term::Terminal term(true, true, true, true);

    Menu::Main_menu mainMenu;
    mainMenu.start();

    return 0;
}
