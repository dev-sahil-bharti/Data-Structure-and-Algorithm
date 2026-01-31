#include <iostream>
#include <algorithm>

using namespace std;
void moveZeros(int arr[], int n)

{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}
int main()
{
    int arr[] = {1, 0, 2, 3, 0, 2, 5, 6, 3, 0, 3};
    int n = 11;

    cout<< "Array is: ";
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i]<<", ";
    }
    

    moveZeros(arr, n);

    cout << "\nAfter moving all zeros to the end: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }

    return 0;
}
