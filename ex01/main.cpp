#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


int	main(void)
{
	 Animal	*animals[10];
	int				i;
	
	i = 0;
	while (i < 10)
	{
		if (i < 5)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		i++;
	}
	while (i)
	{
		std::cout << animals[10-i]->get_type() << std::endl;
		delete animals[10 - i];
		i--;
	}
	Dog	a;
	Dog	b(a);
	
}