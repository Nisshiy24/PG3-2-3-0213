#include <stdio.h>
#include "Cat.h"
#include "Dog.h"

int main() {

	Cat* cat = new Cat;

	Dog* dog = new Dog;

	cat->Bark();
	dog->Bark();

	delete cat;
	
	delete dog;

	return 0;

}