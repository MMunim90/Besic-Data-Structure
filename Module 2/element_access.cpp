#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};

    cout << v[3] << endl;

    // access last index element in a vector
    cout << v[v.size()-1] << endl;
    cout << v.back() << endl;

    // access first index element in a vector
    cout << v[0] << endl;
    cout << v.front() << endl;
    return 0;
}