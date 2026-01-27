#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 4, 5, 6};

    cout << "Array is: ";

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    int largest = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    int secondLargest = -1;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] != largest && arr[i] > secondLargest)
            secondLargest = arr[i];
    }

    cout << "\nSecond Largest = " << secondLargest;
    return 0;
}