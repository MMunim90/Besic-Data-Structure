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

    int crnt_idx = v.size() - 1;

    while (v[crnt_idx] != v[0])
    {
        int prnt_idx = (crnt_idx - 1) / 2;

        if (v[prnt_idx] > v[crnt_idx])
        {
            swap(v[prnt_idx], v[crnt_idx]);
        }
        else
            break;

        crnt_idx = prnt_idx;
    }

    for (int i : v)
    {
        cout << i << " ";
    }

    return 0;
}