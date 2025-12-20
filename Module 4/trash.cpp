#include <bits/stdc++.h>
using namespace std;
int main()
{

    // int arr[5] = {1, 2, 3, 4, 5};

    // cout << (uintptr_t)&arr[1] << " " << (uintptr_t)&arr[2];

    vector<int> v = {1, 2, 3, 4, 5};
    v.push_back(100);
    cout << (uintptr_t)&v[4] << " " << (uintptr_t)&v[5];
    return 0;
}