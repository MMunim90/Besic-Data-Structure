// complexity O(N)

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s; cin >> s;
    
    vector<int> v(26, 0);

    for(int i=0; i<s.size(); i++)
    {
        int idx = s[i] - 'a';
        v[idx]++;
    }

    for(int i=0; i<26; i++)
    {
        if(v[i] != 0)
        {
            char c = i + 'a';
            cout << c << " : " << v[i] << endl;
        }
    }
    return 0;
}