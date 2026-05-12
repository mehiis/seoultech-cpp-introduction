#pragma once

#include <iostream>
using namespace std;

//base class Employee is the base class for the derived classes HourlyEmployee, SalariedEmployee, and Administrator.
class Employee {
public:
	Employee();
	Employee(const string& name, const string& ssn, double netPayment);
	~Employee();

	string getName();
	void setName(const string& name);
	string getSsn();
	void setSsn(const string& ssn);

	double getNetPay();
	void setNetPay(double netPayment);

	void printCheck();
private:
	string name;
	string ssn;
	double netPayment;
};