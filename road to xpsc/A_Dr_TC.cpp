#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    while (n--)
    {
        int x; cin >> x;
        int total_one_count = 0;
        string s; cin >> s;

        for(char c : s)
        {
            if(c == '1')
                total_one_count++;
        }


        int ans = 0;
        for(char c : s)
        {
            if(c == '0')
                ans += total_one_count+1;
            else if(c == '1')
                ans += total_one_count-1;
        }

        cout << ans << endl;
    }
    
    return 0;
}