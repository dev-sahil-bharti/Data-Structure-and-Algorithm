#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    cout << "Address of first element: " << arr << endl;
    cout << "Value of first element: " << *arr << endl;

    // increment and decrement
    int *ptr = arr;
    cout << *ptr << endl;
    ptr++;
    cout << *ptr << endl;
    ptr--;
    cout << *ptr << endl;

    //  Pointer Arithmetic
    int *p = &arr[2]; //   point to 30

    cout << "Current value (p): " << *p << endl;

    int *p2 = p + 1; // 40
    cout << "After adding 1: " << *p2 << endl;

    int *p3 = p - 1; // 20
    cout << "After subtracting 1: " << *p3 << endl;

    return 0;
}