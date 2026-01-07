#include<bits/stdc++.h>
using namespace std;

void running_sum(vector<int> v, int n)
{
    vector<int> ps(n);

    ps[0] = v[0];

    for(int i=1; i<n; i++)
    {
        ps[i] = v[i] + ps[i-1];
    }

    for(int i=0; i<n; i++)
    {
        cout << ps[i] << " ";
    }
}

int main()
{
    int n; cin >> n;
    vector<int> v(n);

    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    
    running_sum(v, n);

    return 0;
}