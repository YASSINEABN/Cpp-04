#include "Animal.hpp"


Animal::Animal(std::string type){
    this->type = type;
}

Animal::Animal(){
    this->type = "default";
    std::cout <<" Constructor is called "<< std::endl;
}

void Animal::set_type(const std::string &value)
{
    this->type = value;
}
std::string Animal::get_type()
{
    return this->type;
}

Animal::~Animal()
{
    std::cout << "destructor is called " << std::endl;
}
void Animal::makesoud() const
{
    std::cout << "im animal" << std::endl ;
}

Animal::Animal(const Animal &obj) 
{
    *this = obj;
    std::cout << "copy constructor is called " << std::endl;
}
Animal &Animal::operator=(const Animal &animal)
{
    if (this != &animal)
    {
        this->type = animal.type;
    }
    return *this;
}
