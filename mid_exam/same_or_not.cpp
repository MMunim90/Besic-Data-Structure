#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m; cin >> n >> m;

    stack<int> st;
    queue<int> q;
    queue<int> q2;
    
    for(int i=0; i<n; i++)
    {
        int val; cin >> val;
        st.push(val);
    }

    while(!st.empty())
    {
        q2.push(st.top());
        st.pop();
    }

    for(int i=0; i<m; i++)
    {
        int val; cin >> val;
        q.push(val);
    }

    (q == q2) ? cout << "YES" << endl : cout << "NO" << endl;
    
    return 0;
}