#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int x, y; cin >> x >> y;

        int total_cell = x+(y*4);
        int screen = y/2;
        int remaining_cell = screen*7;

        if(y%2 != 0)
        {
            screen++;
            remaining_cell += 11;
        }

        if(x > remaining_cell)
        {
            x -= remaining_cell;
            screen += x/15;
            if(x%15 != 0)
            {
                screen++;
            }
        }

         cout << screen << endl;
    }
    
    return 0;
}