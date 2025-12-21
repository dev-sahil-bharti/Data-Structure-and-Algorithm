#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    cout << "Array is: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    cout<< "\nlength of Array: "<< sizeof(arr) /sizeof(arr[0]);
    return 0;
}
