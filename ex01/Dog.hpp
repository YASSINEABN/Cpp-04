#ifndef Dog_HPP
#define Dog_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog :public Animal
{
private:
Brain *brain;
public:
     Dog  ();
     Dog(std::string type);
     Dog(const Dog &obj);
    ~Dog ();
    void makesound();
    Dog &operator=( const Dog &obj);
    void set_Brain(const Brain& obj);
    Brain &getBrain(void) const;
    };



#endif

