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
    int arr[] = {1, 2, 2, 3, 3, 4, 5};
    int n = 7;
    int newLength = removeDuplicates(arr, n);
    cout << "\nRemove Duplicates Elements: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}