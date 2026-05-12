#pragma once

#include <iostream>
using namespace std;

class Pet{
	private:
		string name;
		int age;
		double weight;
	public:
		Pet();
		Pet(const string& name, int age, double weight);
		~Pet();

		string getName();
		void setName(const string& name);
				
		int getAge();
		void setAge(int age);
		
		double getWeight();
		void setWeight(double weight);

		string getLifespan();
};;

