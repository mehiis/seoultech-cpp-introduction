#include "CashPayment.h"
#include <iostream>

using namespace std;

CashPayment::CashPayment() : Payment() {}
CashPayment::CashPayment(float amount) : Payment(amount) {}

CashPayment::~CashPayment() {}

void CashPayment::paymentDetails() {
	cout << "Cash Payment amount is " << getPaymentAmount() << endl;
}