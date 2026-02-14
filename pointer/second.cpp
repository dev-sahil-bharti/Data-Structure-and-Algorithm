#include <iostream>
using namespace std;

// Function using pass-by-reference
void changeValue(int &b)
{
    b = 20;
}
int main()
{
    int a = 10;

    cout << "Before value of a is: " << a << endl;

    changeValue(a);
    cout << "After pass by (reference alias) value of a is: " << a;

    return 0;
}