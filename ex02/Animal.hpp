#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include <string>
class Animal
{
protected:
    std::string type;
public:
    Animal();
    Animal(std::string type);
    Animal(const Animal &obj);
    Animal &operator=(const Animal &animal);
    virtual void makesoud() const = 0;
    virtual ~Animal();
    std::string const &get_type();
    void set_type(const std::string &value);
};


#endif
