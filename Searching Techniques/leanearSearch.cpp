#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int t)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == t)
        {
            return i; 
        }
    }
    return -1;  
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int t = 4;

    int result = linearSearch(arr, n, t);

    if (result != -1)
        cout << "Element found at index: " << result;
    else
        cout << "Element not found";

    return 0;
}