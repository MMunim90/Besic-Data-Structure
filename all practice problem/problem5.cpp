// complexity O(sqrt(N))

#include <bits/stdc++.h>
using namespace std;
int main()
{
    for (int i = 0; i * i < n; i++)
    {
        sum += i;
    }

    for (int i = 0; i < n; i++)
    {
        sum += i;
        i *= k;
    }

    return 0;
}