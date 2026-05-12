#pragma once

#include "Pet.h"

class Dog : public Pet {
	private:
		string breed;
	public:
		Dog();
		Dog(const string& name, int age, double weight, const string& breed);
		~Dog();

		void setBreed(const string& breed);
		string getBreed();

		string getLifespan();

};