#include "animal.h"

using namespace std;

Animal::Animal() {
    id = name = specie = date =  "";
}

string Animal::getId() {
    return id;
}

string Animal::getName() {
    return name;
}

string Animal::getSpecie() {
    return  specie;
}

string Animal::getDate() {
    return date;
}

void Animal::setId(std::string i) {
    id = i;
}

void Animal::setName(std::string n) {
    name =  n;
}

void Animal::setSpcie(std::string x) {
    specie = x;
}

void Animal::setDate(std::string s) {
    date = s;
}
