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

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if(v[i] == 0)
        {
            continue;
        }

        int current_element = v[i] + 1;

        for (int j = 0; j < i; j++)
        {
            if(v[j] == current_element)
            {
                count++;
            }
        }

        for (int j = i + 1; j < n; j++)
        {
            if(v[j] == current_element)
            {
                count++;
            }
        }
    }

    cout << count << endl;
    return 0;
}