#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;

    vector<int> v(n);

    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }

    int num; cin >> num;
    bool is_found = false;

    
    int l=0;
    int r=n-1;

    while (l<=r)
    {
        int mid = (l+r)/2;
        if(v[mid] == num)
        {
            is_found = true;
            break;
        }
        else if(v[mid] > num)
        {
            r = mid-1;
        }
        else
        {
            l = mid+1;
        }
    }
    

    if(is_found)
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
    return 0;
}