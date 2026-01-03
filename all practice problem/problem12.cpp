// complexity O(N*N)

#include <bits/stdc++.h>
using namespace std;
int main()
{
    for (int i = n / 2; i <= n; i++)
    {
        for (int j = 1; j <= n; j = j + 1)
        {
            cout << i << j << endl;
        }
    }

    return 0;
}