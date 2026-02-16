#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector<int> &nums, int target)
{
    int start = 0;
    int end = nums.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}
int main()
{
    vector<int> vec{2, 4, 6, 8, 9, 22};
    int target = 81;
    int result = binarySearch(vec, target);

    if (result > 0)
    {
        cout << "element found on index: " << result;
    }
    else
    {
        cout << "element is not found !";
    }
    return 0;
}