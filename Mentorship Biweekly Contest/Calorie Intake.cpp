#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, z; cin >> x >> y >> z;

    (y*z > x) ? cout << "-1" << endl : cout << x-(y*z) << endl;
    return 0;
}