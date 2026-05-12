#include "Pet.h"

Pet::Pet() : name(""), age(0), weight(0.0) {}
Pet::Pet(const string& name, int age, double weight) : name(name), age(age), weight(weight) {}

Pet::~Pet() {}

string Pet::getName() {
	return name;
}

void Pet::setName(const string& name) {
	this->name = name;
}

int Pet::getAge() {
	return age;
}

void Pet::setAge(int age) {
	this->age = age;
}

double Pet::getWeight() {
	return weight;
}

void Pet::setWeight(double weight) {
	this->weight = weight;
}

string Pet::getLifespan() {
	return "unknown lifespan.";
}