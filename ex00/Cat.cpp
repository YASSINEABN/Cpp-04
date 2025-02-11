#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Constructor Cat is called" << std::endl;
}
Cat::Cat(std::string type) : Animal(type)
{
    std::cout << "parametrized constructor for cat is called" << std::endl;
}

void Cat::makesoud() const
{
    std::cout << "M cat" << std::endl ;
}

Cat::~Cat()
{
    std::cout << "destructor for cat is called " << std::endl;
}
Cat::Cat( const Cat &obj) : Animal(obj)
{
    std::cout << "copy constructor Cat is called" << std::endl;
}

Cat &Cat::operator=( const Cat &obj)
{
    std::cout <<"operator = is called"<< std::endl;
    Animal::operator=(obj);
    return *this;
}

