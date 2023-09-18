
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	const Animal* Animal[10];

	for (int i = 0; i < 5; i++)
		Animal[i] = new Dog();
	for (int i = 5; i < 10; i++)
		Animal[i] = new Cat();
	for (int i = 0; i < 10; i++)
		Animal[i]->MakeSound();
	for (int i = 0; i < 10; i++)
		delete Animal[i];
	std::cout << std::endl;
	return 0;
}
