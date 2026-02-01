#include <iostream>
using namespace std;

void searchNumber(int arr[], int n, int num)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            cout << "Number found at index: " << i;
            return;
        }
    }
    cout << "Number is not found!"; 
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 6;
    int num = 5;

    searchNumber(arr, n, num);

    return 0;
}