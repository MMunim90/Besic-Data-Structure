#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;

    vector<string> v(n);

    // for(int i=0; i<n; i++)
    // {
    //     cin >> v[i];
    // }

    // if the string has space
    cin.ignore();
    for(int i=0; i<n; i++)
    {
        getline(cin, v[i]);
    }

    for(string str: v)
    {
        cout << str << endl;
    }
    return 0;
}