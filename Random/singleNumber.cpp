#include <iostream>
#include <vector>
using namespace std;

// Burst force
int singleNumber1(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        int count = 0;
        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[i] == nums[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            return nums[i];
        }
    }
    return -1;
}
// optimal Approach
int singleNumber(vector<int> &nums)
{
    int ans = 0;
    for (int n : nums)
    {
        ans ^= n;
    }
    return ans;
}

int main()
{
    vector<int> vec{1, 1, 2, 4, 2};

    cout << "Single Number is: " << singleNumber(vec);

    return 0;
}
