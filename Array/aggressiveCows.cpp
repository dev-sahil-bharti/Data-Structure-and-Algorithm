#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossible(vector<int> &arr, int n, int c, int minAllowedDistance)
{
    int cow = 1, lastStallPos = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] - lastStallPos >= minAllowedDistance)
        {
            cow++;
            lastStallPos = arr[i];
        }

        if (cow == c)
        {
            return true;
        }
    }
    return false;
}

int getDistance(vector<int> &arr, int n, int c)
{
    sort(arr.begin(), arr.end());
    int maxVal = arr[n - 1];
    int minVal = arr[0];
    int st = 1;
    int end = maxVal - minVal;
    int ans = -1;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (isPossible(arr, n, c, mid))
        {
            ans = mid;
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> arr{1, 2, 8, 4, 9};
    int c = 3;
    int n = 5;

    int result = getDistance(arr, n, c);

    cout << "Maximum minimum distance between cow " << result;

    return 0;
}