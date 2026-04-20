#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int sortColor(vector<int> &arr, int N)
{


    // sort(arr.begin(), arr.end());  // array sort using function

    int count0 = 0, count1 = 0, count2 = 0;

    for (int i = 0; i < N; i++) // o(n)
    {
        if (arr[i] == 0)
            count0++;
        else if (arr[i] == 1)
            count1++;
        else
            count2++;
    }

    int idx = 0;

    for (int i = 0; i < count0; i++) // o(n)
    {
        arr[idx++] = 0;
    }

    for (int i = 0; i < count1; i++)
    {
        arr[idx++] = 1;
    }

    for (int i = 0; i < count2; i++)
    {
        arr[idx++] = 2;
    }
}

void printArray(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] <<", ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr{0, 2, 1, 2, 0, 0, 1, 1, 0, 2, 1};
    int n = arr.size(); // safer than hardcoding

    sortColor(arr, n);
    printArray(arr, n);

    return 0;
}