#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void dutchNationalFlag(vector<int> &arr)
{
    int low = 0;
    int mid = 0;
    int high = arr.size() - 1;

    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

void printArray(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {2, 0, 1, 2, 1, 0, 0, 2, 1};
    int n = arr.size();

    dutchNationalFlag(arr);
    printArray(arr, n);

    return 0;
}