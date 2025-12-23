#include<bits/stdc++.h>
using namespace std;

void func(int *&p)
{
    p = NULL;

    // int y = 99;
    // p = &y;

    // *p = 99;
    // cout << "In Func: " << &p << endl;
}

int main()
{
    int x = 9;
    int *p = &x;

    // cout << "Before: " << x << endl;
    func(p);
    cout << "In Main: " << p << endl;
    // cout << "After: " << x <<endl;
    return 0;
}