#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    int q; cin >> q;
    while (q--)
    {
        int x; cin >> x;
        int flag = 0;

        for(int i=0; i<n; i++)
        {
            if(arr[i] == x)
            {
                cout << "YES" << endl;
                flag = 1;
                continue;
            }
        }

        if(flag == 0)
        {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}