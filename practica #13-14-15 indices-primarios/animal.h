#ifndef ANIMAL_H_INCLUDED
#define ANIMAL_H_INCLUDED

#include <string>

class Animal {
private :
    std::string id,
        name,
        specie,
        date;


public :
    Animal();

    std::string getId();
    std::string getName();
    std::string getSpecie();
    std::string getDate();

    void setId(std::string);
    void setName(std::string);
    void setSpcie(std::string);
    void setDate(std::string);

};

#endif // ANIMAL_H_INCLUDED
