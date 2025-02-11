#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <string.h>
#include <iostream>

class Brain
{
private:
    std::string ideas[100];
public:
    Brain();
    Brain(const Brain &obj);
    Brain const &operator=(const Brain& obj);
    void	setIdea(std::string const &idea, int const &index);
    std::string const	&getIdea(int const &index);
    ~Brain();
};

#endif 