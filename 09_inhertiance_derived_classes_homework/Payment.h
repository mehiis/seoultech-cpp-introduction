#pragma once

class Payment {
	private:
		float paymentAmount;
	public:
		Payment();
		Payment(float amount);
		~Payment();

		void setPaymentAmount(float amount);
		float getPaymentAmount();

		void paymentDetails();
};