#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int val;
    cin >> val;
    v.push_back(val);

    int cur_idx = v.size() - 1;
    while (v[cur_idx] != v[0])
    {
        int par_idx = (cur_idx - 1) / 2;

        // cout << par_idx << endl;

        if (v[par_idx] < v[cur_idx])
            swap(v[par_idx], v[cur_idx]);
        else
            break;
        
            cur_idx = par_idx;
    }

    for(int i:v)
    {
        cout << i << " ";
    }

    return 0;
}