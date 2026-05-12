#include "CreditCardPayment.h"

CreditCardPayment::CreditCardPayment(float amount, const string& cardHolderName, const string& expirationDate, const string& cardNumber) : 
	Payment(amount), cardNumber(cardNumber), cardHolderName(cardHolderName), expirationDate(expirationDate) {}
CreditCardPayment::~CreditCardPayment() {}

void CreditCardPayment::setCardNumber(const string& cardNumber) {
	this->cardNumber = cardNumber;
}

string CreditCardPayment::getCardNumber() {
	return cardNumber;
}

void CreditCardPayment::setCardHolderName(const string& cardHolderName) {
	this->cardHolderName = cardHolderName;
}

string CreditCardPayment::getCardHolderName() {
	return cardHolderName;
}

void CreditCardPayment::setExpirationDate(const string& expirationDate) {
	this->expirationDate = expirationDate;
}

string CreditCardPayment::getExpirationDate() {
	return expirationDate;
}

void CreditCardPayment::paymentDetails() {
	cout << "Credit Card Payment amount is " <<	getPaymentAmount() << endl;
	cout << "The name on the card is: " << cardHolderName << endl;
	cout << "The expiration date of the card is: " << expirationDate << endl;
	cout << "The card number is: " << cardNumber << endl;
}

