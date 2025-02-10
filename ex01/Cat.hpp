#ifndef Cat_HPP
#define Cat_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat :public Animal
{
private:
Brain *brain;
public:
     Cat  ();
     Cat(std::string type);
     Cat(const Cat &obj);
    ~Cat ();
    void makesound();
    Cat &operator=( const Cat &obj);
    Brain get_brain();
    void set_Brain(const Brain& obj);
    Brain &getBrain(void) const;
    };



#endif

