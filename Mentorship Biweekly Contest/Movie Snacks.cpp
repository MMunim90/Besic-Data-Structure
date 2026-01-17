#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, z; cin >> x >> y >> z;
    ((x*2+y*3) >= (z*2)+y) ? cout << (z*2)+y << endl : cout << x*2+y*3 << endl;
    return 0;
}