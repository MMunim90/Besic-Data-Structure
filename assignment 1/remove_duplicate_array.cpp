#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;

    vector<int> arr(n);

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }


    for(int i = 0; i<arr.size(); i++)
    {
        for(int j=i+1; j<arr.size(); j++)
        {
            if(arr[i] == arr[j])
            {
                arr.erase(arr.begin() + j);
                j--;
            }
        }
    }

    for(int i=0; i<arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}