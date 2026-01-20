#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;

        string s; cin >> s;

        int count_dot = 0;
        bool found = false;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == '.' && s[i+1] == '.' && s[i+2] == '.')
            {
                cout << 2 << endl;
                found = true;
                break;
            }
            else if(s[i] == '.')
            {
                count_dot++;
            }
        }

        if(!found)
            cout << count_dot << endl;
    }
    
    return 0;
}