#include <iostream>
using namespace std;
// Brute Force Approach
int missingNumber(int arr[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        bool found = false;
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] == i)
            {
                found = true;
                break;
            }
        }
        if (!found)
            return i;
    }
    return -1;
}

// Better Approach

int betterMissingNumber(int arr[], int n)
{
    int hash[n + 1] = {0};
    for (int i = 0; i < n - 1; i++)
    {
        hash[arr[i]] = 1;
    }

    for (int i = 1; i <= n; i++)
    {
        if (hash[i] == 0)
        {
            return i;
        }
    }
    return -1;
}
// Optimal Approach

// int OptimalMissingNumber(int arr[], int n)
// {
//     int total = n * (n + 1) / 2;
//     int sum = 0;

//     for (int i = 0; i < n-1; i++)
//     {
//         sum += arr[i];
//     }
//     return total - sum;
// }

int optimalMissingNumber(int arr[], int n)
{
    int xor1 = 0, xor2 = 0;
    for (int i = 0; i <= n; i++)
    {
        xor1 ^= i;
    }
    for (int i = 0; i < n - 1; i++)
    {
        xor2 ^= arr[i];
    }

    return xor1 ^ xor2;
}

int main()
{
    int arr[] = {1, 2, 4, 5};
    int n = 5;

    // cout << "Missing Number is: " << missingNumber(arr, n);
    cout << "Missing Number is: " << OptimalMissingNumber(arr, n);

    return 0;
}