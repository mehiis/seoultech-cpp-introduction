#pragma once

#include "Pet.h"

class Turtle : public Pet {
	private:
	public:
		Turtle();
		Turtle(const string& name, int age, double weight);
		~Turtle();
		string getLifespan();
};