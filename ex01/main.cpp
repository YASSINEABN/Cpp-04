#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <crtdbg.h>

#define _CRTDBG_MAP_ALLOC

int	main(void)
{
	const Animal	*animals[10];
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
		delete animals[10 - i];
		i--;
	}
	Dog	a;
	Dog	b(a);
	 _CrtSetReportMode(_CRT_WARN, _CRTDBG_MODE_DEBUG); 
    _CrtDumpMemoryLeaks();
}