#include <iostream>
#include "SentinelValue.cpp"
#include "Primes.cpp"
#include "GradeCalculator.cpp"
#include "BabylonianAlgorithm.cpp"
#include "GuessTheNumber.cpp"
using namespace std;

int main() {
	SentinelValue sentinelValue;
	//sentinelValue.execute();

	Primes primes;
	//primes.execute();

	GradeCalculator gc;
	//gc.execute();

	BabylonianAlgorithm ba;
	//ba.execute();

	GuessTheNumber gn;
	gn.execute();

	return 0;
}