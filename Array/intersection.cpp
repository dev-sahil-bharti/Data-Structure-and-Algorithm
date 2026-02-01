#include <iostream>
#include <algorithm>
using namespace std;

void intersection(int a[], int b[], int n, int m)
{
    int i = 0, j = 0;
    cout << "Intersection: ";

    while (i < n && j < m)
    {
        if (a[i] == b[j])
        {
            cout << a[i] << " ";
            i++;
            j++;
        }
        else if (a[i] < b[j])
            i++;
        else
            j++;
    }
}

int main()
{
    int arrA[] = {1, 2, 3, 4, 5};
    int arrB[] = {1, 7, 3, 8, 2};
    int n = 5, m = 5;

    // ✅ sort both arrays
    sort(arrA, arrA + n);
    sort(arrB, arrB + m);

    intersection(arrA, arrB, n, m);

    return 0;
}
