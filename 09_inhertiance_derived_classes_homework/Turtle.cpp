#include "Turtle.h"

Turtle::Turtle() : Pet() {}
Turtle::Turtle(const string& name, int age, double weight) : Pet(name, age, weight) {}

Turtle::~Turtle() {}

string Turtle::getLifespan() { return "Approximately 100 years"; }