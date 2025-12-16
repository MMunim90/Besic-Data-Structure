#include<bits/stdc++.h>
using namespace std;
int main()
{
    // complexity O(nlogn)
    int n; cin >> n;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j*=2)
        {
            cout << "Hello" << endl;
        }
    }
    return 0;
}