#include <iostream>
using namespace std;

int main()
{
    int arr[5];

    cout << "Enter 5 elements: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    cout << "\nFor loop: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\nWhile loop: ";
    int i = 0;
    while (i < 5)
    {
        cout << arr[i] << " ";
        i++;
    }

    cout << "\nDo-While loop: ";
    int j = 0;
    do
    {
            cout << arr[j] << " ";
            j++;
    } while (j < 5);

    cout << "\nRange-based for loop: ";
    for (int x : arr)
    {
        cout << x << " ";
    }

    return 0;
}
