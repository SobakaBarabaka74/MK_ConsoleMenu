#include "Project/ConsoleMenu/menu.h"
#include "Project/ConsoleMenu/menu_item.h"

void showLicense();
void showMsg();
void mainMenu();

menu main;
main.add(menu_item("License", showLicense));
main.add(menu_item("Msg", showMsg));

void showLicense() 
{
    std::cout << "© Mak" << "\n";
    menu bk;
    bk.add(menu_item("main", mainMenu));
    bk.open();
}

void showMsg() 
{
    std::cout << "Hi! :)" << "\n";
    menu bk;
    bk.add(menu_item("main", mainMenu));
    bk.open();
}

void mainMenu() 
{
    main.open();
}

int main(void) 
{
    mainMenu();
}
