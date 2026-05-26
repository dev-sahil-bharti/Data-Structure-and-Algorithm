#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to calculate next gap
int nextGap(int gap)
{

    if (gap <= 1)
        return 0;

    return (gap / 2) + (gap % 2);
}

// Merge function
void merge(vector<int> &arr1, vector<int> &arr2)
{

    int n = arr1.size();
    int m = arr2.size();

    int gap = nextGap(n + m);

    while (gap > 0)
    {

        int i = 0;
        int j = gap;

        while (j < (n + m))
        {

            // Case 1: both pointers in arr1
            if (i < n && j < n)
            {

                if (arr1[i] > arr1[j])
                {
                    swap(arr1[i], arr1[j]);
                }
            }

            // Case 2: i in arr1, j in arr2
            else if (i < n && j >= n)
            {

                if (arr1[i] > arr2[j - n])
                {
                    swap(arr1[i], arr2[j - n]);
                }
            }

            // Case 3: both pointers in arr2
            else
            {

                if (arr2[i - n] > arr2[j - n])
                {
                    swap(arr2[i - n], arr2[j - n]);
                }
            }

            i++;
            j++;
        }

        gap = nextGap(gap);
    }
}

int main()
{

    vector<int> arr1 = {1, 4, 7, 8, 10};
    vector<int> arr2 = {2, 3, 9};

    merge(arr1, arr2);

    cout << "Merged Arrays:\n";

    for (int x : arr1)
        cout << x << " ";

    for (int x : arr2)
        cout << x << " ";

    return 0;
}