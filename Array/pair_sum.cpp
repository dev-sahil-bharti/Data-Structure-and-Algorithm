#include <iostream>
#include <vector>
using namespace std;

// Brute Force Approach
int pairSum(int arr[], int n, int t)
{
    int sum = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] + arr[j] == t)
            {
                cout << arr[i] << " " << arr[j] << endl;
                return 1;
            }
        }
    }
    return -1;
}

// Optimal Approach

vector<int> pairSum(vector<int> &nums, int target)
{
    int i = 0, j = nums.size() - 1;

    while (i < j)
    {
        int sum = nums[i] + nums[j];

        if (sum > target)
            j--;
        else if (sum < target)
            i++;
        else
            return {i, j};
    }
    return {};
}

int main()
{
    int arr[] = {2, 7, 11, 15};
    int n = 4;
    int t = 9;

    cout << "Pair sum is: "
         << pairSum(arr, n, t) << endl;

    vector<int> vec{2, 7, 11, 15};
    int target = 9;

    vector<int> ans = pairSum(vec, target);

    if (!ans.empty())
        cout << "Pair indices: " << ans[0] << " " << ans[1];
    else
        cout << "No pair found";

    return 0;
}