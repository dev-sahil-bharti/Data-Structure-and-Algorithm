#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Brute force Approach
int majority_Element(vector<int> &nums)
{
    int n = nums.size();
    for (int val : nums)
    {
        int freq = 0;

        for (int el : nums)
        {
            if (el == val)
            {
                freq++;
            }
        }
        if (freq > n / 2)
        {
            return val;
        }
    }
    return -1;
}

// Best Approach
int majority_Element2(vector<int> &nums)
{
    int n = nums.size();
    // Sort
    sort(nums.begin(), nums.end());

    // frequency Count
    int freq = 1, ans = nums[0];

    for (int i = 1; i < n; i++)
    {
        if (nums[i] == nums[i - 1])
        {
            freq++;
        }
        else
        {
            freq = 1;
            ans = nums[i];
        }
        if (freq > n / 2)
        {
            return ans;
        }
    }
    return -1;
}
// Optimal Approach
int majorityElements(vector<int> &nums)
{
    int freq = 0, ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (freq == 0)
        {
            ans = nums[i];
        }
        if (ans == nums[i])
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }
    return ans;
}
int main()
{
    vector<int> vec{1, 2, 2, 1, 1};

    cout << "Majority Elements : "
         << majorityElements(vec);

    return 0;
}