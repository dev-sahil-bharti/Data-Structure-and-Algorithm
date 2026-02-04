// Longest sub array with given sum (positive)

#include <iostream>
using namespace std;

// Brute force
int longestSubarrayWithSumK(int arr[], int n, int k)
{
    int maxLen = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum == k)
            {
                maxLen = max(maxLen, j - i + 1);
            }
        }
    }
    return maxLen;
}
// Optimal Approach
int longestSubarrayWithSumK2(int arr[], int n, int k)
{
    int left = 0, sum = 0, maxLen = 0;
    for (int right = 0; right < n; right++)
    {
        sum += arr[right];
        while (sum > k)
        {
            sum -= arr[left];
            left++;
        }
        if (sum == k)
        {
            maxLen = max(maxLen, right - left + 1);
        }
    }
    return maxLen;
}

int main()
{
    {
        int arr[] = {1, 2, 3, 1, 1, 1, 1};
        int n = 7;
        int k = 3;

        cout << "Longest subarray length: "
             << longestSubarrayWithSumK2(arr, n, k);

        return 0;
    }
}