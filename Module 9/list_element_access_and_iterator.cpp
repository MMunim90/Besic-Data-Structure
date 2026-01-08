#include<bits/stdc++.h>
using namespace std;
int main()
{
    // back and front function

    list<int> l = {1, 2, 3, 4, 6, 8, 1, 3};
    // cout << l.front() << endl;
    // cout << l.back() << endl;
    // cout << *next(l.begin(), 4) << endl;


    // iterator functions
    cout << *l.begin() << endl;
    // cout << *l.end() << endl;  // this function is not printing the last node of a linked list because l.end() function point after the last node.
    return 0;
}