#include "Brain.hpp"
#include <cstring>
#include <algorithm> 
#include <iostream>

Brain::Brain()
{
    std::cout << "default constructor is called " << std::endl;
}

Brain::Brain(const Brain& obj)
{
    *this = obj;
    std::cout << "copy constructor is called" << std::endl ;
}

Brain const &Brain::operator=(const Brain& obj) {
    if (this != &obj) {  
        for (int i = 0; i < 100; ++i) {
            this->ideas[i] = obj.ideas[i];
}

        std::cout << "operator= is called" << std::endl;
    }
    return *this;  
}

void	Brain::setIdea(std::string const &idea, int const &index)
{
    if (index <= 0 and index >= 100)
        this->ideas[index] = idea;
}

std::string const	&Brain::getIdea(int const &index)
{
    if (index <= 0 and index >= 100)
            return this->ideas[index];
        
        return this->ideas[0];
}

Brain::~Brain()
{
    std::cout << "destructor is called " << std::endl;
}
