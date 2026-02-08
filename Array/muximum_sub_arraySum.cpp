#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Brute Force
int maxSumSubArray(vector<int> &nums)
{
    int maxSum = INT_MIN;

    for (int st = 0; st < nums.size(); st++)
    {
        for (int end = st; end < nums.size(); end++)
        {
            int currentSum = 0;
            for (int i = st; i <= end; i++)
            {
                currentSum += nums[i];
            }
            maxSum = max(currentSum, maxSum);
        }
    }
    return maxSum;
}
// optimal approach
int maxSubArray(vector<int> &nums)
{
    int max_sum = INT_MIN;
    int current_sum = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        current_sum = max(nums[i], current_sum + nums[i]);
        max_sum = max(max_sum, current_sum);
    }
    return max_sum;
}

int main()
{
    vector<int> vec{3, -4, 5, 4, -1, 7, -8};

    cout << "maximum sum of sub array: "
         << maxSumSubArray(vec);
    cout << "\noptimal Approach Max sum sub array: " << maxSubArray(vec);
    return 0;
}