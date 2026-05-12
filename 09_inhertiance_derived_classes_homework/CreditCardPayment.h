#pragma once

#include "Payment.h"
#include <iostream>

using namespace std;

class CreditCardPayment : public Payment {
	private:
		string cardNumber;
		string cardHolderName;
		string expirationDate;
	public:
		CreditCardPayment(float amount, const string& cardNumber, const string& cardHolderName, const string& expirationDate);
		~CreditCardPayment();
		
		void setCardNumber(const string& cardNumber);
		string getCardNumber();
		
		void setCardHolderName(const string& cardHolderName);
		string getCardHolderName();
		
		void setExpirationDate(const string& expirationDate);
		string getExpirationDate();
		
		void paymentDetails();
};
