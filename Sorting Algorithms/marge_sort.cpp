#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
void merge(vector<int> &arr, vector<int> &temp, int left, int mid, int right)
{
    int i = left;
    int j = mid + 1;
    int k = left;

    // Merge two sorted halves
    while (i <= mid && j <= right)
    {
        if (arr[i] <= arr[j])
        {
            temp[k] = arr[i];
            i++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }
    // Copy remaining elements of left half
    while (i <= mid)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }

    // Copy remaining elements of right half
    while (j <= right)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }

    // Copy merged elements back to original array
    for (int x = left; x <= right; x++)
    {
        arr[x] = temp[x];
    }
}

void mergeSort(vector<int> &arr, vector<int> &temp, int left, int right)
{
    if (left >= right)
        return;

    int mid = left + (right - left) / 2;

    mergeSort(arr, temp, left, mid);
    mergeSort(arr, temp, mid + 1, right);

    merge(arr, temp, left, mid, right);
}

int main()
{
    vector<int> arr = {5, 2, 8, 1, 3};

    vector<int> temp(arr.size());

    mergeSort(arr, temp, 0, arr.size() - 1);

    cout << "Sorted Array: ";

    for (int num : arr)
    {
        cout << num << " ";
    }

    return 0;
}