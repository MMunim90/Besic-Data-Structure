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


    bool is_equilibrium = false;
    
    for(int i=0; i<n; i++)
    {
        int right_sum = 0;
        int left_sum = 0;
        
        for(int j=0; j<i; j++)
        {
            left_sum += arr[j];
        }

        for(int j=i+1; j<n; j++)
        {
            right_sum += arr[j];
        }

        if(left_sum == right_sum)
        {
            is_equilibrium = true;
            cout << i << endl;
            return 0;
        }

        // cout << left_sum << " " << right_sum << endl;
    }

    if(is_equilibrium != true)
    {
        cout << "No Equilibrium Index found" << endl;
    }
    return 0;
}