#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

/**

DATA : DELIMITADORES
INDEX : FIJO

*/

#include <fstream>
#include <cstdlib>
#include <string>

#include <thread>  // std::thread
#include <time.h>

/// DEPENDECES
#include "animal.h"
#include "list.h"
#include "list.cpp"

/// FILES
#define NAMEFILE_DATA       "data.txt"
#define NAMEFILE_INDEX      "index.txt"

/// TEMP FILES
#define TEMP_NAME_DATA      "temp_data"
#define TEMP_NAME_INDEX     "temp_index"

/// TO DATA FILE
#define CHARACTER_ANCHOR "|"

/// AUTOSAVE
#define TIME_AUTOSAVE_INDEX 15

/// MENU

#define TITLE_ADD           "ADD ANIMAL"
#define TITLE_PRINT_DATA    "PRINT ANIMALS"
#define TITLE_PRINT_INDEX   "PRINT INDEX"
#define TITLE_EXIT          "EXIT"

#define CHARACTER_ADD           1
#define CHARACTER_PRINT_DATA    2
#define CHARACTER_PRINT_INDEX   3
#define EXIT                    8

#define NUMBER_NON_ACTION       0

/// GENERAL
#define CLEAR                   "clear"


class Menu {

private :
    std::thread autosave;

    std::fstream* fileData;
    std::fstream* fileIndex;

    List<Animal> lista;

public:
    Menu();
    void start(size_t); /// TO START DOING SOMETHING
    void printMenu();
    void doAction(short);

    Animal* capture();

    void writeFileData(Animal*);

    /// FILES
    void openFileData();
    void openFileIndex();

    void closeFileData();
    void closeFileIndex();

    void writeAnimalData(Animal*);
    void writeAnimalIndex(string);

};


#endif // MENU_H_INCLUDED
