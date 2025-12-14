#include<bits/stdc++.h>
using namespace std;
int main()
{

    // complexity O(logn)
    int n; cin >> n;

    // example 1
    // for(int i=1; i<=n; i*=2)
    // {
    //     cout << i << endl;
    // }

    // example 2
    // for(int i=n; i>=1; i/=3)
    // {
    //     cout << i << endl;
    // }

    // example 3
    int k = 2;
    for(int i=1; i<n; i++)
    {
        cout << i << endl;
        i = i*k;
    }
    return 0;
}