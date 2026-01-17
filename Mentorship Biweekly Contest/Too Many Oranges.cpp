#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int x, y; cin >> x >> y;
        (y / x >= 10) ? cout << "YES" << endl : cout << "NO" << endl;
    }
    
    return 0;
}