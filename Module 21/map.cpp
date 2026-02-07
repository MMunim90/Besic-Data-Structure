#include<bits/stdc++.h>
using namespace std;
int main()
{
    // syntex => map_name [key] = val;
    map<string, int> mp;
    mp["tamim"] = 2;
    mp["ramim"] = 5;  // logN
    mp["shamim"] = 50;
    // mp["hamim"] = 0;

    // cout << mp["ramim"] << endl;
    // cout << mp["hamim"] << endl;

    // for(auto it = mp.begin(); it != mp.end(); it++)  ///O(NlogN)
    // {
    //     cout << it->first << " " << it->second << endl; //logN
    // }

    // cout << mp["hamim"] << endl;

    if(mp.count("hamim"))
    {
        cout << "the key is exist" << endl;
    }
    else
    {
        cout << "key not found" << endl;
    }
    return 0;
}