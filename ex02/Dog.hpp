#ifndef Dog_HPP
#define Dog_HPP
#include "Animal.hpp"

class Dog :public Animal
{

public:
     Dog  ();
     Dog(std::string type);
     Dog( Dog &obj);
    ~Dog ();
    void makesound();
    Dog &operator=( Dog &obj);
};



#endif

