#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int	 main()
{
	size_t	nbr = 4;

	Animal** animals = new Animal*[nbr];
	for (size_t i = 0; i < nbr; i++)
	{
		if (i < nbr / 2)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}

	for (size_t i = 0; i < nbr; i++)
		animals[i]->makeSound();

	for (size_t i = 0; i < nbr; i++)
		delete animals[i];
	delete [] animals;

	std::cout << "-------" << std::endl;

	Cat *cat = new Cat();
	Dog	*dog = new Dog();

	cat->setIdeas(0, "need to sleep.");
	std::cout << cat->getType() << ": "<< cat->getIdeas(0) << std::endl;
	dog->setIdeas(0, "need to eat.");
	std::cout << dog->getType() << ": "<< dog->getIdeas(0) << std::endl;

	delete(cat);
	delete(dog);
	
	std::cout << "-------" << std::endl;

	Dog *a = new Dog();
	// Cat *a = new Cat();

	a->setIdeas(0, "I don't know what to do !");

	Dog *b = new Dog(*a);
	// Cat *b = new Cat(*a);
	std::cout << std::endl;

	std::cout << "The " << a->getType() << " a idea : " << std::endl;
	std::cout << a->getIdeas(0) << std::endl;
	std::cout << std::endl;

	delete(a);

	std::cout << std::endl;
	std::cout << "The " << b->getType() << " b ideas : " << std::endl;
	std::cout << b->getIdeas(0) << std::endl;
	std::cout << std::endl;
	
	delete(b);

	return 0;
}