#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;
    cout << "size of vector = " << vec.size() << endl;

    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);

    vec.pop_back();
    cout << "After Push Vector size = " << vec.size() << endl;

    cout << vec.front();
    cout << vec.back();
    cout << vec.at(1); // base on index (i = 0,1,2,3)
    
    // for (int i : vec)
    // {
    //     cout << i << endl;
    // }
    return 0;
}
