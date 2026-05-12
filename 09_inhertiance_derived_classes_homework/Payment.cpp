#include "Payment.h"

#include <iostream>
using namespace std;

Payment::Payment() : paymentAmount(0.0f) {}
Payment::Payment(float amount) : paymentAmount(amount) {}

Payment::~Payment() {}

void Payment::setPaymentAmount(float amount) {
	paymentAmount = amount;
}

float Payment::getPaymentAmount() {
	return paymentAmount;
}

void Payment::paymentDetails() {
	cout << "Payment amount: $" << paymentAmount << endl;
}