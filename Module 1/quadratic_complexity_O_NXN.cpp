#include<bits/stdc++.h>
using namespace std;
int main()
{

    // example 1
    // complexity O(nXn)
    // int n; cin >> n;

    // for(int i=0; i<n; i++)
    // {
    //     for(int j=0; j<n; j++)
    //     {
    //         cout << "Hello World" << endl;
    //     }
    // }


    // example 2
    // complexity O(nXm)
    // int n, m; cin >> n >> m;

    // for(int i=0; i<n; i++)
    // {
    //     for(int j=0; j<m; j++)
    //     {   
    //         cout << "Hello" << endl;
    //     }
    // }

    // example 3
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