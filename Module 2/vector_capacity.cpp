#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;

    // capacity() function
    // cout << v.capacity() << endl;
    // v.push_back(10);
    // cout << v.capacity() << endl;
    // v.push_back(10);
    // cout << v.capacity() << endl;
    // v.push_back(10);
    // cout << v.capacity() << endl;
    // v.push_back(10);
    // cout << v.capacity() << endl;
    // v.push_back(10);
    // cout << v.capacity() << endl;


    // clear() function
    // v.push_back(11);
    // v.push_back(20);
    // v.push_back(30);

    // cout << v.size() << endl;
    // v.clear();
    // cout << v.size() << endl;

    // v.push_back(99);

    // // empty() function
    // (v.empty()) ? cout << "empty" << endl : cout << "Not empty" << endl;

    // for(int i=0; i<3; i++)
    // {
    //     cout << v[i] << " ";
    // }


    // resize() function
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    v.resize(9, 99);
    for(int i=0; i<v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}