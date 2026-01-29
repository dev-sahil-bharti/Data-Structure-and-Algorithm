#include <iostream>
using namespace std;

void subarraySum(int arr[], int n, int S)
{
    int start = 0, currSum = 0;

    for (int end = 0; end < n; end++)
    {
        currSum += arr[end];

        while (currSum > S && start <= end)
        {
            currSum -= arr[start];
            start++;
        }

        if (currSum == S)
        {
            cout << "Subarray found from index " << start << " to " << end;
            return;
        }
    }
    cout << "No subarray found";
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = 9;
    int S = 5;

    subarraySum(arr, n, S);

    return 0;
}
