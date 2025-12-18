#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v = {1, 2, 3, 4, 5, 6};
    
    // vector assign function
    
    // vector<int> v2;
    // v2 = v;
    // for(int i=0; i<v2.size(); i++)
    // {
    //     cout << v2[i] << " ";
    // }

    // for(int x: v2)
    // {
    //     cout << x << " ";
    // }


    // vector pop back function

    // v.pop_back();
    // v.pop_back();
    // for(int i:v)
    // {
    //     cout << i << " ";
    // }


    // vector push back function

    // v.push_back(10);
    // for(int i:v)
    // {
    //     cout << i << " ";
    // }


    // vector insert function
    // work with v.begin() and v.end()

    // example 1
    // v.insert(v.begin()+2, 99);
    // for(int i:v)
    // {
    //     cout << i << " ";
    // }


    // example 2
    // vector<int>v2 = {100, 200, 300};
    // v.insert(v.begin()+2, v2.begin(), v2.end());


    // for(int i:v)
    // {
    //     cout << i << " ";
    // }


    // vector erase function
    // erase single value

    // v.erase(v.begin()+2);

    // for(int i:v)
    // {
    //     cout << i << " ";
    // }


    // erase multiple value

    // v.erase(v.begin()+1, v.begin()+5); // method 1
    // v.erase(v.begin()+1, v.end()-1); // method 2
    // for(int i:v)
    // {
    //     cout << i << " ";
    // }


    // replace function

    // vector<int> v = {1, 2, 3, 2, 4, 2, 5, 2, 6};

    // replace(v.begin(), v.end()-2, 2, 9);

    // for(int i:v)
    // {
    //     cout << i << " ";
    // }


    // find function

    vector<int> v = {1, 2, 3, 4, 5};

    auto itr = find(v.begin(), v.end(), 2);

    // if(itr == v.end())
    // {
    //     cout << "Not Found" << endl;
    // }
    // else
    // {
    //     cout << "Found" << endl;
    // }

    cout << *itr << endl;
    return 0;
}