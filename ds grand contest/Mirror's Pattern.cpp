#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;

    
    if(n == 1)
    {
        cout << 1 << endl;
        return 0;
    }
    
    for(int i=1; i<=n; i++)
    {
        cout << i;
        if(i == n) cout << endl;
    }
    
    int j = n-1;
    int space = n-2;
    
    for(int i=2; i<n; i++)
    {
        cout << i;

        for(int k=0; k<space; k++)
        {
            cout << " ";
        }
        cout << j;

        j--;
        cout << endl;
    }

    for(int i=n; i>=1; i--)
    {
        cout << i;
    }
    return 0;
}