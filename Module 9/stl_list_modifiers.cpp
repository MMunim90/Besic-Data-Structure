#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {22, 22, 23, 43, 65, 76, 22, 67};
    // list<int> k2 = {144, 444, 555};
    // vector<int> v = {114, 534, 998};
    // list<int> l2;
    // l2 = l;
    // l2.assign(l.begin(), l.end());

    // push function

    // l.push_back(33);
    // l.push_back(43);
    // l.push_front(11);
    // l.push_front(54);

    // l.pop_back();
    // l.pop_front();
    

    // for calculating specific node
    // cout << *next(l.begin(), 2);

    // insert function
    // l.insert(next(l.begin(), 2), 56);

    // l.insert(next(l.begin(), 2), v.begin(), v.end());
    // l.insert(next(l.begin(), 2), k2.begin(), k2.end());

    // erase function

    // erase single value
    // l.erase(next(l.begin(), 3));

    // erase multiple value
    // l.erase(next(l.begin(), 2), next(l.begin(), 7));


    // replace function
    // replace(l.begin(), l.end(), 22, 99);


    // find function
    auto it = find(l.begin(), l.end(), 23);
    if(it == l.end())
    {
        cout << "Not Found" << endl;
    }
    else
    {
        cout << "Found" << endl;
    }

    // for(int i : l)
    // {
    //     cout << i << " ";
    // }
    return 0;
}