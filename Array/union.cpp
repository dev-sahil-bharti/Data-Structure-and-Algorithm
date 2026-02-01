#include <iostream>
using namespace std;
void unionArray(int a[], int b[], int n, int m)
{
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
            cout << a[i++] << " ";
        else if (b[j] < a[i])
            cout << b[j++] << " ";
        else
        {
            cout << a[i] << " ";
            i++;
            j++;
        }
    }
    while (i < n)
        cout << a[i++] << " ";
    while (j < m)
        cout << b[j++] << " ";
}
int main()
{
    int arrA[] = {1, 2, 3, 4, 5};
    int arrB[] = {3, 4, 5, 6, 7};

    int n = 4;
    int m = 4;

    cout << "union of array: ";
    unionArray(arrA, arrB, n, m);

    return 0;
}