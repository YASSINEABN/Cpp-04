#ifndef Dog_HPP
#define Dog_HPP
#include "Animal.hpp"

class Dog :public Animal
{

public:
     Dog  ();
     Dog( std::string type);
     Dog( const  Dog &obj);
    ~Dog ();
    void makesoud() const;
    Dog &operator=( const Dog &obj);
};



#endif

