#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;

        string s;
        cin >> s;

        int freq[7] = {0};
        for(char c : s)
        {
            freq[c-'A']++;
        }

        int ans = 0;

        for(int i=0; i<7; i++)
        {
            if(freq[i] < m)
            {
                ans += (m-freq[i]);
            }
        }

        cout << ans << endl;
    }
    
    return 0;
}