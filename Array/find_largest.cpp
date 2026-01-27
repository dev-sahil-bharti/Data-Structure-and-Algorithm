/*
PS D:\Coding\C++> cd "d:\Coding\C++\Array" ; g++ -o find_largest.exe find_largest.cpp ; .\find_largest.exe
hello world
*/

#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    cout << "Array is: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i]<< " ";
    }

    int large = arr[0];

    cout << "\nlargest elements is: ";
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > large)
        {
            large = arr[i];
        }
    }
    cout << large;
    return 0;
}
