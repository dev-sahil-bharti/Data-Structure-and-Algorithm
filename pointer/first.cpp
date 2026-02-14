#include <iostream>
using namespace std;

int main()
{
    int num = 10;
    int *ptr = &num;
    int **ptr2 = &ptr;

    cout << "-------SINGLE POINTER---------\n";

    cout << "Value of num: " << num << endl;
    cout << "Address of num (&num): " << &num << endl;

    cout << "\nValue stored in ptr (address of num): " << ptr << endl;
    cout << "Address of ptr (&ptr): " << &ptr << endl;
    cout << "Value pointed by ptr (*ptr): " << *ptr << endl;

    cout << "\n-----------DOUBLE POINTER---------  \n";

    cout << "Value stored in ptr2 (address of ptr): " << ptr2 << endl;
    cout << "Address of ptr2 (&ptr2): " << &ptr2 << endl;

    cout << "\nValue pointed by ptr2 (*ptr2): " << *ptr2 << endl;
    cout << "Value pointed by ptr2 twice (**ptr2): " << **ptr2 << endl;

    return 0;
}
