#include<bits/stdc++.h>
using namespace std;
int main()
{
    // complexity O(sqrt(n))
    int n; cin >> n;

    // for(int i=1; i<=sqrt(n); i++)
    // {
    //     cout << i << endl;
    // }

    // divisor of n
    // for(int i=1; i<=n; i++)
    // {
    //     if(n % i == 0) cout << i << " ";
    // }

    // optimize this code using O(sqrt(n))
    // i*i <= n
    for(int i=1; i<=sqrt(n); i++)
    {
        if(n % i == 0) cout << i << " " << n / i << " ";
    }
    return 0;
}