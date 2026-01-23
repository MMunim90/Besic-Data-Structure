#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        
        int includes = 0;
        for (int i = l; i <= r; i++)
        {
            if (arr[i] < arr[i - 1] && arr[i] < arr[i + 1])
            {
                if(i >= l && i <= r)
                {
                    includes++;
                }
            }
        }

        cout << includes << endl;
    }

    return 0;
}