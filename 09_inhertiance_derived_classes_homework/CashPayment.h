#pragma once
#include "Payment.h"

class CashPayment : public Payment {
	private:
	public:
		CashPayment();
		CashPayment(float amount);
		~CashPayment();
		void paymentDetails();
};
