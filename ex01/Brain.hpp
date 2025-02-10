#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
private:
    std::string ideas[100];
public:
    Brain();
    Brain(const Brain& obj);
    Brain &operator=(const Brain&obj);
    void setidea(std::string idea , int index);
    std::string get_idea(int index);
    ~Brain();
};



#endif