#pragma once

#include "SalariedEmployee.h"

class Administrator : public SalariedEmployee { // Derived class Administrator inherits from derived class SalariedEmployee
private:
	string title;
	string responsibility;
	string supervisor;
public:
	Administrator();
	Administrator(const string& name, const string& ssn, double netPayment, double weeklySalary, const string& title, const string& responsibility, const string& supervisor);
	~Administrator();

	void setTitle(const string& title);
	string getTitle();

	void setResponsibility(const string& responsibility);
	string getResponsibility();

	void setSupervisor(const string& supervisor);
	string getSupervisor();

	void inputData();
	void increaseSalary(double amount);
	void inputChangeSupervisor();
	void print();
	void printCheck();
};