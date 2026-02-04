#include <iostream>
using namespace std;

void twoSum(int arr[], int n, int s)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] + arr[j] == s)
            {
                cout << "Yes pair: ";
                cout << "\nIndexes: " << i << " and " << j;
                cout << "\nElements: "  << arr[i] << ", " << arr[j];
                return;
            }
        }
    }
    cout << "No";
}
int main()
{
    int arr[] = {2, 6, 5, 8, 11};
    int n = 4;
    int s = 14;
    twoSum(arr, n, s);
    return 0;
}