#include <iostream>
using namespace std;

int removeDuplicates(int arr[], int n)
{
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[j] != arr[i])
        {
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1;
}
int main()
{
    int arr[] = {1, 2, 3, 3, 5, 5, 6};

    int n = 7;
    int NewLength = removeDuplicates(arr, n);

    cout << "array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }

    cout << "\nremove duplicates: ";
    for (int i = 0; i < NewLength; i++)
    {
        cout << arr[i] << ", ";
    }

    return 0;
}