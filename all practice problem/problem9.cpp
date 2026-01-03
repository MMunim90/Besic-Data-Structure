// complexity O(N*N)

#include <bits/stdc++.h>
using namespace std;
int main()
{
    for (int i = 0; i < n; i++)
        for (int j = i; j > 0; j--)
            cout << i << j;

    return 0;
}