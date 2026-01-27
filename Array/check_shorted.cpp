#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {1, 7, 4, 5, 6, 5};
    bool isSorted = true;
    cout << "Array is: ";
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << ", ";
    }

    cout << "\nArray is Shorted : ";
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            isSorted = false;
        }
    }

    if (isSorted)
    {
        cout << "True";
    }
    else
    {
        cout << "false";
    }

    return true;
}