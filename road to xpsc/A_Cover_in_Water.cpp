// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t; cin >> t;
//     while (t--)
//     {
//         int n; cin >> n;

//         string s; cin >> s;

//         int count_dot = 0;
//         bool found = false;
//         for(int i=0; i<s.size(); i++)
//         {
//             if(s[i] == '.' && s[i+1] == '.' && s[i+2] == '.')
//             {
//                 cout << 2 << endl;
//                 found = true;
//                 break;
//             }
//             else if(s[i] == '.')
//             {
//                 count_dot++;
//             }
//         }

//         if(!found)
//             cout << count_dot << endl;
//     }
    
//     return 0;
// }


// another way to solve

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;

        string s; cin >> s;

        int empty = 0;
        int consecutive = 0;

        for(char c : s)
        {
            if(c == '.')
            {
                empty++;
                consecutive++;

                if(consecutive == 3) break;
            }
            else
                consecutive = 0;
        }

        if(consecutive == 3) cout << 2 << endl;
        else cout << empty << endl;
    }
    
    return 0;
}

