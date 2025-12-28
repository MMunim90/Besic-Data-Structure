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

    sort(arr, arr+n);

    bool is_duplicate = false;

    for(int i=0; i<n; i++)
    {
        if(arr[i] == arr[i+1])
        {
            is_duplicate = true;
            break;
        }
    }

    if(is_duplicate)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}