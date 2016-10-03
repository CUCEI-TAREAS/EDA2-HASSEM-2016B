#include "menu.h"

using namespace std;

Menu::Menu() {
    fileData = fileIndex = nullptr;
}

void Menu::start(size_t doing=NUMBER_NON_ACTION) {

    if (doing) {
        doAction(doing);
    }

    do {
        system(CLEAR);

        printMenu();
        cout<< "chose a option : ";
        cin>>doing;

        doAction(doing);

    } while(doing != EXIT );
}

void Menu::printMenu() {
    cout<<TITLE_ADD         <<" "<<CHARACTER_ADD<<endl;
    cout<<TITLE_PRINT_DATA  <<" "<<CHARACTER_PRINT_DATA<<endl;
    cout<<TITLE_PRINT_INDEX <<" "<<CHARACTER_PRINT_INDEX<<endl;
    cout<<TITLE_EXIT        <<" "<<EXIT<<endl;

}
void Menu::doAction(short option) {
    switch (option){

    case CHARACTER_ADD :
        system(CLEAR);

        capture();

        break;
    case CHARACTER_PRINT_DATA :
        break;
    }
}

Animal *Menu::capture(){
    cout<<TITLE_ADD<<endl;

    string temp;

    cin.ignore();
    cin.clear();

    cout<<"ID : ";
    getline(cin, temp);

    //// SEEK ID DUPLICATED

    Animal* animal = new Animal();
    animal->setId(temp);

    cout<<"name : ";
    getline(cin, temp);
    animal->setName(temp);

    cout<<"specie : ";
    getline(cin, temp);
    animal->setSpcie(temp);

    cout<<"date birthday : ";
    getline(cin, temp);
    animal->setDate(temp);

    return animal;
}

