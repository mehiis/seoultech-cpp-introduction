/*
PRACTICE 2:
	Write a program that finds and prints all of the prime numbers between 3 and 100.
		• A prime number is a number such that one and itself are the only numbers that evenly divide it (e.g., 3,5,7,11,13,17, …).
*/

#include <iostream>
using namespace std;

class Primes {
public:
	void execute() {
		//for loop starts from value 3 and stops when counter hits 101 (loop between 3-100).
		for (int i = 3; i < 101; i++) {
			//each loop starts with prime being true, if it remains true to the end of the loop then it is a prime number.
			bool isPrime = true;

			//nested loop which checks modulo of every number between 2-(i-1).
			for (int j = 2; j < i; j++) {
				//if i % j remainder is 0, that means the number was succesfully divided with number that was not 1 or itself.
				if (i % j == 0) 
					isPrime = false; //this is not a prime number then
			}
			
			//if number was not dividable with any numbers in nested loop means it was a prime number and thus printed.
			if (isPrime)
				cout << i << " ";
		}
	}
};

