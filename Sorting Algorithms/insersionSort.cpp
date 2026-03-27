#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        int curr = arr[i];
        int prev = i - 1;

        while (prev >= 0 && arr[prev] > curr)
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr; // placing the curr el in its correct position
    }
}

void printArray(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr{3, 4, 2, 7, 1};
    int n = arr.size();

    insertionSort(arr, n);

    cout << "sorted array is: ";

    printArray(arr, n);
    return 0;
}