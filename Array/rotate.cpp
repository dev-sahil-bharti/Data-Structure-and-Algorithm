#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = 6;

    int temp1 = arr[0];
    int temp2 = arr[1];

    for (int i = 2; i < n; i++)
    {
        arr[i - 2] = arr[i];
    }

    arr[n - 2] = temp1;
    arr[n - 1] = temp2;

    cout<<"Array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }

    return 0;
}