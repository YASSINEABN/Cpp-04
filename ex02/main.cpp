#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"

int main()
{
    Animal *a = new Cat();

    a->makesoud() ;
}