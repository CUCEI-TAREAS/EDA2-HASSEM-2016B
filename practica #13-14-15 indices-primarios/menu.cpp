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
    Animal* ani = nullptr;

    switch (option){

    case CHARACTER_ADD :
        system(CLEAR);

        ani = capture();
        writeAnimalData(ani);
        writeAnimalIndex(ani->getId());
        closeFileData();
        /// write to data file
        /// then write list

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

void Menu::openFileData(){
    fileData = new fstream(NAMEFILE_DATA, ofstream::app);
}

void Menu::openFileIndex(){
    fileIndex = new fstream(NAMEFILE_INDEX, ofstream::app);
}

void Menu::closeFileData(){
    fileData->close();
    fileData = nullptr;
}

void Menu::closeFileIndex(){
    fileIndex->close();
    fileIndex = nullptr;
}

void Menu::writeAnimalData(Animal * any){
    openFileData();

    int temp = any->getId().length();
    fileData->write(any->getId().c_str(), temp);
}

void Menu::writeAnimalIndex(string id){
    openFileIndex();
    int temp =  id.length();
    fileIndex->write(id.c_str(), temp);
    fileIndex->write(CHARACTER_ANCHOR, 1);
    /// file position
}

