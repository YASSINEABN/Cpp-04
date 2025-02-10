#include "Dog.hpp"

Dog::Dog()
{
    this->brain = new Brain();
    std::cout << "Constructor Dog is called" << std::endl;
}

Dog::Dog(std::string type) : Animal(type)
{
    std::cout << "parametrized constructor for Dog is called" << std::endl;
}

void Dog::makesound()
{
    std::cout << "M Dog" << std::endl ;
}

Dog::~Dog()
{
    std::cout << "destructor for Dog is called " << std::endl;
}

Dog::Dog( const Dog &obj) : Animal(obj)
{
    this->brain = new Brain(*obj.brain);
    std::cout << "copy constructor Dog is called" << std::endl;
}

Dog &Dog::operator=( const Dog &obj)
{
    std::cout <<"operator = is called"<< std::endl;
    Animal::operator=(obj);
    *this->brain = *obj.brain;
    return *this;
}

Brain Dog::get_brain()
{
    return *this->brain;
}

void Dog::set_Brain( const Brain& obj)
{
    *this->brain = obj;
}

Brain &Dog::getBrain(void) const
{
	return (*this->brain);
}
