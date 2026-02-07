#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec;

    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    cout << "size = " << vec.size() << endl;
    cout << "capacity = " << vec.capacity() << endl;

    vec.push_back(40);
    vec.push_back(50);
    cout << "size = " << vec.size() << endl;
    cout << "capacity = " << vec.capacity() << endl;
    vec.push_back(50);

    return 0;
}