#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int a, b, c; cin >> a >> b >> c;

        int first_lift = a-1;
        int second_lift = (c > b) ? abs((c-b)+(c-1)) : b-1;

        if(first_lift > second_lift)
        {
            cout << "2" << endl;
        }
        else if(first_lift < second_lift)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "3" << endl;
        }

    }
    
    return 0;
}