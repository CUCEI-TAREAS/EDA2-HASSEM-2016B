#include "animal.h"

using namespace std;

animal::animal() {
id = name = specie = date "";
}

string animal::getId() {
    return id;
}

string animal::getName() {
    return name;
}

string animal::getSpecie() {
    return  specie;
}

string animal::getDate() {
    return date;
}

void animal::setId(std::string i) {
    id = i;
}

void animal::setName(std::string n) {
    name =  n;
}

void animal::setSpcie(std::string x) {
    specie = x;
}

void animal::setDate(std::string s) {
    date = s;
}
