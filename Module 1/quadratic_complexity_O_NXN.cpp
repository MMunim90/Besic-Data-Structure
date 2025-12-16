#include<bits/stdc++.h>
using namespace std;
int main()
{
    // complexity O(nXn)
    // int n; cin >> n;

    // for(int i=0; i<n; i++)
    // {
    //     for(int j=0; j<n; j++)
    //     {
    //         cout << "Hello World" << endl;
    //     }
    // }


    // complexity O(nXm)
    // int n, m; cin >> n >> m;

    // for(int i=0; i<n; i++)
    // {
    //     for(int j=0; j<m; j++)
    //     {   
    //         cout << "Hello" << endl;
    //     }
    // }

    // complexity (nXnXn)
    int n; cin >> n;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {   
            for(int k=0; k<n; k++)
            {
                cout << "Hello" << endl;
            }
        }
    }
    return 0;
}