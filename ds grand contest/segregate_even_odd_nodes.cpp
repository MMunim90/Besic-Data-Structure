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

    vector<int> even;
    vector<int> odd;

    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 == 0)
            even.push_back(v[i]);
        else
            odd.push_back(v[i]);
    }

    for (int i = 0; i < even.size(); i++)
    {
        cout << even[i] << " ";
    }
    for (int i = 0; i < odd.size(); i++)
    {
        cout << odd[i] << " ";
    }

    cout << endl;
    return 0;
}