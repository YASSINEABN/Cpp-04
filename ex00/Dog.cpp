#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Constructor Dog is called" << std::endl;
}
Dog::Dog(std::string type) : Animal(type)
{
    std::cout << "parametrized constructor for Dog is called" << std::endl;
}

void Dog::makesoud() const
{
    std::cout << "M Dog" << std::endl ;
}


Dog::~Dog()
{
    std::cout << "destructor for Dog is called " << std::endl;
}
Dog::Dog( const Dog &obj) : Animal(obj)
{
    std::cout << "copy constructor Dog is called" << std::endl;
}

Dog &Dog::operator=( const Dog &obj)
{
    std::cout <<"operator = is called"<< std::endl;
    Animal::operator=(obj);
    return *this;
}

