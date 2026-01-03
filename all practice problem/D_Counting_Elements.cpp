#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;

    vector<int> v(n);

    for(int i=0; i<n; i++)
    {
        // int x; cin >> x;
        // v.push_back(x);
        cin >> v[i];
    }

    int count = 0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(v[i]+1 == v[j])
            {
                count++;
                
            }
        }
    }

    cout << count << endl;
    return 0;
}