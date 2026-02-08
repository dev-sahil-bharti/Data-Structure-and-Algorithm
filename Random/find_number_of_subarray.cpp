#include <iostream>
#include <vector>
using namespace std;

int totalSubArray(vector<int> &nums)
{
    int n = nums.size();
    return n * (n + 1) / 2;
}
int main()
{
    vector<int> vec{1, 2, 3, 4, 5};

    cout << "total number of sub array: " << totalSubArray(vec);
    return 0;
}