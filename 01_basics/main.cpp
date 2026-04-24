#include <iostream>
using namespace std;

//SLIDE 19 define macros
#define intVal 10
#define floatVal 4.5
#define charVal 'G'
#define stringVal "ABC"

void slideFour() {
    cout << "Hello World!" << endl;
}

void slideNine() {
    cout << "Write something:" << endl;
    string message;

    cin >> message;
    cout << "You wrote: " << message << endl;
}

void slideSixteen() {
    int oneWeight = 2;
    int amountOfEntities = 5;
    int totalWeight = oneWeight * amountOfEntities;

    cout << "Total weight: " << totalWeight << endl;
}

void slideSeventeen() {
    int a = 5;
    int b = a;
    int c = a + b;

    cout << "Values: " << a << ", " << b << ", " << c << endl;
}

void slideEighteen() {
    int number1, number2;

    cout << "Enter number 1: ";
    cin >> number1;

    cout << "Enter number 2: ";
    cin >> number2;

    int sum = number1 + number2;
    cout << "The sum is: " << sum << endl;
}

void slideNineteen() {
    printf("Integer constant: %d\n", intVal);
    printf("Floating point constant: %.2f\n", floatVal);
    printf("Character constant: %c\n", charVal);
    printf("String constant: %s\n", stringVal);
}

void slideTwentyThree() {
    int a = 10;
    int b = 20;

    int addition = a + b;
    int subtraction = a - b;
    int multiplication = a * b;
    int division = a / b;
    int modulus = a % b;

    int incrementA = a++;
    int decrementB = b--;

    cout << "Addition: " << addition << endl;
    cout << "Subtraction: " << subtraction << endl;
    cout << "Multiplication: " << multiplication << endl;
    cout << "Division: " << division << endl;
    cout << "Modulus: " << modulus << endl;
    cout << "Increment A: " << incrementA << endl;
    cout << "Decrement B: " << decrementB << endl;
}

void slideTwentyFive() {
    int m, y;
    m = 5;
    y = m++; //m is assigned to y, then m is incremented!!

    // m = 6, y = 5
    cout << "m = " << m << ", y = " << y << endl;
    m = 5;
    y = ++m; //m is incremented, then m is assigned to y!!

    // m = 6, y = 6
    cout << "m = " << m << ", y = " << y << endl;
}

void slideThihrtyThreeToThirtyEight() {
    int a = 60;
    int b = 10;


    if (a == b) {
        cout << "a is equal to b" << endl;
    }

    if (a != b) {
        cout << "a is not equal to b" << endl;
    }

    a += b; // a = a + b
    b -= a; // b = b - a
}

int main() {
    slideNineteen();
	return 0;
}