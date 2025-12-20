#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, q; cin >> n >> q;

    int arr[n];
    
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr+n);
    
    while(q--)
    {
        int num; cin >> num;
        bool is_found = false;
        int l = 0;
        int r = n-1;
        
        while(l <= r)
        {
            int mid = (l+r)/2;

            if(arr[mid] == num)
            {
                is_found = true;
                break;
            }
            else if(arr[mid] > num)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        if(is_found)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }
    
    return 0;
}