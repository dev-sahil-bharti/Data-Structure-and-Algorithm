#include <iostream>
using namespace std;

// Function with No Argument & No Return Value
void greet() {
    cout << "\nHello! This is a function with NO arguments & NO return value.";
}

// Function with Argument But No Return Value
void printSquare(int n) {
    cout << "\nSquare of " << n << " is: " << n * n;
}

// Function with No Argument But Returns Value
int getNumber() {
    int num;
    cout << "\nEnter a number: ";
    cin >> num;
    return num;
}

// Function with Argument & Return Value
int add(int a, int b) {
    return a + b;
}

int main() {

    // Calling 1st function
    greet();

    // Calling 2nd function
    int x = 4;
    printSquare(x);

    // Calling 3rd function
    int num = getNumber();
    cout << "You entered: " << num;

    // Calling 4th function
    int a = 5, b = 10;
    cout << "\nAddition of " << a << " and " << b << " is: " << add(a, b);

    cout << "\n\n--- Program Completed Successfully ---";
    return 0;
}
