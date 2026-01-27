#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    int smallest = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    cout << "smallest is: " << smallest;
    return 0;
}
