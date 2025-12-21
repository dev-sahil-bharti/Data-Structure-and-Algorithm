#include <iostream>
using namespace std;
int main()
{
    long a = 150000;
    unsigned long long b = 15000053438390800000ULL;
    cout << b;

    string fullName;
    cout << "Enter Your Full Name : ";
    getline(cin, fullName);
    /* The line `cin >> fullName;` is attempting to read input from the standard input stream (usually
    the keyboard) and store it in the variable `fullName`, which is a string. However, this line is
    redundant and unnecessary because you have already read input into `fullName` using
    `getline(cin, fullName);` just before it. */
    // cin >> fullName;
    cout << fullName;
    return 0;
}