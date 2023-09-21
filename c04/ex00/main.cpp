
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	//const Animal* meta = new Animal();
	const Animal* j = new Dog();
	//const Animal* i = new Cat();
	//const WrongAnimal* wrongMeta = new WrongAnimal();
	//const WrongAnimal* wrongJ = new WrongCat();

	std::cout << std::endl;
	//std::cout << "meta->getType(): " << meta->getType() << std::endl;
	std::cout << "j->getType(): " << j->getType() << std::endl;
	//std::cout << "i->getType(): " << i->getType() << std::endl;
	//std::cout << "wrongMeta->getType(): " << wrongMeta->getType() << std::endl;
	//std::cout << "wrongJ->getType(): " << wrongJ->getType() << std::endl;
	std::cout << std::endl;
	//i->MakeSound();
	j->MakeSound();
	//meta->MakeSound();
	//wrongJ->MakeSound();
	//wrongMeta->MakeSound();
	std::cout << std::endl;
	//delete meta;
	delete j;
	//delete i;
	//delete wrongMeta;
	//delete wrongJ;
	std::cout << std::endl;
	return 0;
}
