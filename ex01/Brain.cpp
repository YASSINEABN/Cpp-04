#include "Brain.hpp"
#include <cstring>

Brain::Brain()
{
    *this->ideas = {""};
    std::cout << "default constructor is called " << std::endl;
}

Brain::Brain(const Brain& obj)
{
    *this = obj;
    std::cout << "copy constructor is called" << std::endl ;
}

Brain &Brain::operator=(const Brain& obj)
{
    std::memcpy(this->ideas,obj.ideas,sizeof(obj.ideas));
    std::cout << "operator = is called " << std ::endl ;
}

void Brain::setidea(std::string idea , int index)
{
    if (index <= 0 and index >= 100)
        this->ideas[index] = idea;
}

std::string Brain::get_idea(int index)
{
    if (index <= 0 and index >= 100)
            return this->ideas[index];
        
        return this->ideas[0];
}

Brain::~Brain()
{
    std::cout << "destructor is called " << std::endl;
}
