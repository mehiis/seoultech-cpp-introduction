#include "Dog.h"

Dog::Dog() : Pet(), breed("") {}
Dog::Dog(const string& name, int age, double weight, const string& breed) : Pet(name, age, weight), breed(breed) {}

Dog::~Dog() {}

void Dog::setBreed(const string& breed) {
	this->breed = breed;
}

string Dog::getBreed() {
	return breed;
}

string Dog::getLifespan() {
	if(this->getWeight() > 100) { return "Approximately 7 years"; }
	else { return "Approximately 13 years";  }
}