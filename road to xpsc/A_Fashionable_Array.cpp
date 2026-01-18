#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int arr[n];

        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr+n);


        int mn = arr[0];
        int max = arr[n-1];
        
        // if(min%2 == 0 && max%2 == 0)
        //     cout << 0 << endl;
        // else if(min%2 != 0 && max%2 != 0)
        //     cout << 0 << endl;

        // or this way 

        if(mn%2 == max%2) cout << 0 << endl;
        else
        {
            int i=0, cnt = 0;
            while (arr[i]%2 != max%2)
            {
                i++; cnt++;
            }
            
            int j=n-1, cnt2 = 0;
            while (arr[j]%2 != mn%2)
            {
                j--; cnt2++;
            }

            // (cnt > cnt2) ? cout << cnt2 << endl : cout << cnt << endl;

            // or this way 

            cout << min(cnt,cnt2) << endl;
        }
    }
    
    return 0;
}