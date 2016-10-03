#include "menu.h"

using namespace std;

Menu::Menu() {
    fileData = fileIndex = nullptr;
}

size_t Menu::start(size_t doing = NUMBER_NON_ACTION) {

    if (doing) {
        doAction(doing);
    }

    do {
        system(CLEAR);

        printMenu();
        cout<< "chose a option : ";
        cin>>doing;

    } while(doing != EXIT );
    doAction(doing);
}

void Menu::printMenu() {
    //cout<<
}
void Menu::doAction(short option) {

}
