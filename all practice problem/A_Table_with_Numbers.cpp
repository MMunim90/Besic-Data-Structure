#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, h, l;
        cin >> n >> h >> l;

        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }

        int h_count = 0;
        int l_count = 0;
        for(int i=0; i<n; i++)
        {
            if(arr[i] <= h)
            {
                h_count++;
            }
            if(arr[i] <= l)
            {
                l_count++;
            }
        }

        (l_count >= h_count) ? cout << "h_count = " << h_count << " / " << "l_count = " << l_count << endl : cout << "h_count = " << h_count << " / " << "l_count = " << l_count << endl; 

        // (l_count >= h_count) ? cout << (l_count - h_count) << endl : cout << (h_count - l_count) << endl; 
    }
    
    return 0;
}