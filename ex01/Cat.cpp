#include "Cat.hpp"

Cat::Cat()
{
    this->brain = new Brain();
    std::cout << "Constructor Cat is called" << std::endl;
}

Cat::Cat(std::string type) : Animal(type)
{
    std::cout << "parametrized constructor for Cat is called" << std::endl;
}

void Cat::makesound()
{
    std::cout << "M Cat" << std::endl ;
}

Cat::~Cat()
{
    std::cout << "destructor for Cat is called " << std::endl;
}

Cat::Cat( const Cat &obj) : Animal(obj)
{
    this->brain = new Brain(*obj.brain);
    std::cout << "copy constructor Cat is called" << std::endl;
}

Cat &Cat::operator=( const Cat &obj)
{
    std::cout <<"operator = is called"<< std::endl;
    Animal::operator=(obj);
    *this->brain = *obj.brain;
    return *this;
}

Brain Cat::get_brain()
{
    return *this->brain;
}

void Cat::set_Brain( const Brain& obj)
{
    *this->brain = obj;
}

Brain &Cat::getBrain(void) const
{
	return (*this->brain);
}
