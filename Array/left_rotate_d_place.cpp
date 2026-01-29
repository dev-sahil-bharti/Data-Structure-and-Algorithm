#include<iostream>
#include<algorithm>
using namespace std;

void leftRotate(int arr[], int n, int d)
{
    d = d % n;

    reverse(arr, arr + d);
    reverse(arr + d, arr + n);
    reverse(arr, arr + n);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    int d = 3;

    cout<< "Array is: ";
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i]<< ", ";
    }
    
    leftRotate(arr, n, d);

    cout << "\nArray after left rotation by " << d << " places: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
