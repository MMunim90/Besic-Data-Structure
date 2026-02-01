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

        int pass_mark = ((n+1)*100)/2;

        int get_marks = 0;
        for(int i=0; i<n; i++)
        {
            get_marks+=arr[i];
        }

        int needed = pass_mark - get_marks;

        if(get_marks > pass_mark) cout << "0" <<endl;
        else if(needed <= 100) cout << needed << endl;
        else if(needed > 100) cout << "-1" << endl;
        
    }
    
    return 0;
}