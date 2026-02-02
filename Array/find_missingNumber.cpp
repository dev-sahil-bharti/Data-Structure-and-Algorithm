#include <iostream>
using namespace std;
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

int main()
{
    int arr[] = {1, 2, 4, 5};
    int n = 5;

    cout << "Missing Number is: " << missingNumber(arr, n);

    return 0;
}