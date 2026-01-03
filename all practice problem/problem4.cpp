// complexity O(N*N*N)

#include<bits/stdc++.h>
using namespace std;
int main()
{
    for(int i=0;i<n;i++)
    {
        for(int j=n;j>=0;j--)
        {
            for(int k=1;k<=n;k++)
            {
                sum += i+j+k;
            }
        }
    }


    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            sum += i+j;
        }
    }

    return 0;
}