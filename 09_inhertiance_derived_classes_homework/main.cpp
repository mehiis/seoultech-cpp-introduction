#include <iostream>
using namespace std;

#include "HourlyEmployee.h"
#include "SalariedEmployee.h"
#include "Administrator.h"

#include "CashPayment.h"
#include "CreditCardPayment.h"

#include "Dog.h"
#include "Turtle.h"


int main() {

	{
		//assignment_01
		HourlyEmployee hourlyEmployee("Mighty Joe", "123-45-6789", 0.0, 20.5, 40.0);
		hourlyEmployee.printCheck();

		SalariedEmployee salariedEmployee("Mr. Big Shot", "987-65-4321", 10500.5, 10500.5);
		salariedEmployee.printCheck();

		Administrator admin = Administrator();
		admin.inputData();
		admin.print();
		admin.inputChangeSupervisor();
		admin.increaseSalary(50.0);
		admin.print();
		admin.printCheck();

		hourlyEmployee.Employee::printCheck(); // Call the base class printCheck() function for the HourlyEmployee object for demo purposes.
	}

	{
		//assignment_02
		cout << "Create objects...\n\n";

		CashPayment cash1(50.5), cash2(20.45);
		CreditCardPayment credit1(10.5, "Fred", "10/5/2010", "12345");
		CreditCardPayment credit2(100, "Barney", "11/15/2009", "98765");

		cout << "Cash 1 details:" << endl;
		cash1.paymentDetails();
		cout << endl;

		cout << "Cash 2 details:" << endl;
		cash2.paymentDetails();
		cout << endl;

		cout << "Credit 1 details:" << endl;
		credit1.paymentDetails();
		cout << endl;

		cout << "Credit 2 details:" << endl;
		credit2.paymentDetails();
		cout << endl;
	}

	{
		//assignment_03
		Dog fido("Fido", 5, 120, "Great Dane");
		Dog pippen("Pippen", 2, 45, "Dalmatian");
		Turtle rocco("Rocco", 99, 1);


		cout << fido.getName() << ", age " << fido.getAge()
			<< ", weight " << fido.getWeight() << ", breed "
			<< fido.getBreed() << endl;
		cout << fido.getLifespan() << endl << endl;
		cout << pippen.getName() << ", age " << pippen.getAge()
			<< ", weight " << pippen.getWeight() << ", breed "
			<< pippen.getBreed() << endl;
		cout << pippen.getLifespan() << endl << endl;
		cout << rocco.getName() << ", age " << rocco.getAge()
			<< ", weight " << rocco.getWeight() << endl;
		cout << rocco.getLifespan() << endl << endl;
	}

	return 0;
};