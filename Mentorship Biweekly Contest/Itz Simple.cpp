#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, k, p; cin >> n >> k >> p;

        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }

        int varun_total = 0;
        int ved_total = 0;

        int max = INT_MIN;
        int total = 0;

        for(int i=0; i<n; i++)
        {
            if(arr[i] > max)
            {
                max = arr[i];
            }
            total += arr[i];
        }

        ved_total = k+max;
        varun_total = p+(total - max);


        (ved_total > varun_total) ? cout << "Ved" << endl : (ved_total < varun_total) ? cout << "Varun" << endl : cout << "Equal" << endl;
    }
    
    return 0;
}