#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat :public Animal
{
    private:
        Brain *ptr;

public:
     Cat  ();
     Cat(std::string type);
     Cat(Brain &obj);
     Cat( Cat &obj);
    ~Cat ();
    void makesound();
    Cat &operator=( Cat &obj);
};



#endif

