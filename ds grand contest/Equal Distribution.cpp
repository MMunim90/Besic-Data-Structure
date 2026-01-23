#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, k; cin >> n >> k;

    long long int receive_per_student = k/n;
    long long int distributed = n*receive_per_student; 

    cout << receive_per_student << " " << (k - distributed) << endl;

    return 0;
}