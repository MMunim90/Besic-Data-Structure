#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        string str; cin >> str;

        stack<char> s;

        for(int i=0; i<str.size(); i++)
        {
            if(s.empty())
            {
                s.push(str[i]);
            }
            else if(s.top() == '1' && str[i] == '0')
            {
                s.pop();
            }
            else if(s.top() == '0' && str[i] == '1')
            {
                s.pop();
            }
            else
            {
                s.push(str[i]);
            }
        }

        if(s.empty())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}