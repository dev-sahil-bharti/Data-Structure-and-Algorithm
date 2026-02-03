// find the numbers the appends once and other numbers twice.
#include <iostream>
using namespace std;

// Brute force Approach
int numberTwice(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count == 1)
            return arr[i];
    }
    return -1;
}
// Optimal Approach
int singleNumber(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    int arr[] = {1, 1, 2, 3, 3, 4, 4};
    int n = 7;

    cout << "number twice: " << numberTwice(arr, n);
    cout << "\nnumber twice: " << singleNumber(arr, n);
    return 0;
}