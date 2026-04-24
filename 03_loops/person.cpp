#include <iostream>
using namespace std;

class Person {
public:
	int _age;
	string _name;

	 Person(string name, int age) {
		 _name = name;
		 _age = age;

	}

	 void displayInformation() {
		 cout << "This person name is " << _name << " and they are " << _age << " years old." << endl;
	}
};