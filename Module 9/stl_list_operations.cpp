#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {40, 30, 20, 50, 10, 60, 60, 70, 60, 40};

    // remove function
    // l.remove(60);

    // sort function
    // X sort(l.begin(), l.end()); // this sort function is not working on the linked list.

    // l.sort();  // this sort function is working for liked list and print the list in ascending order.

    // l.sort(greater<int>()); // this code print the linked list in descending order.


    // unique function
    // l.unique();

    // reverse function
    l.reverse();
    for(int val : l)
    {
        cout << val << " ";
    }
    return 0;
}