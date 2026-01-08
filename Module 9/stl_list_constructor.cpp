#include<bits/stdc++.h>
using namespace std;
int main()
{

    // constructor

    // list<int> l;
    // list<int> l(9);
    // cout << l.size() << endl;
    // -----------------------------------------------------------
    // list<int> l(9, 3);
    // cout << *l.begin() << endl;

    // for(list<int>::iterator itr=l.begin(); itr!=l.end(); itr++)
    // {
    //     cout << *itr << " ";
    // }

    // shortcut for the upper loop
    // for(auto itr=l.begin(); itr!=l.end(); itr++)
    // {
    //     cout << *itr << " ";
    // }

    // shortcut for the upper loop
    // for(int itr : l)
    // {
    //     cout << itr << " ";
    // }

    //----------------------------------------------------------------

    // for list
    list<int> l = {1, 2, 3, 4, 5};
    // list<int> l2(l);

    // for array
    int arr[] = {10, 20, 30};
    // list<int> l2(arr, arr+3);

    // for vector
    vector<int> v = {11, 22, 33};
    list<int> l2(v.begin(), v.end());

    for(int i : l2)
    {
        cout << i << " ";
    }

    return 0;
}