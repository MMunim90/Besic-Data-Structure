#include <bits/stdc++.h>
using namespace std;
int main()
{
    // for maximum priority queue;
    // priority_queue<int> pq;

    // pq.push(10);
    // pq.push(5);
    // pq.push(30);

    // cout << pq.top() << endl;
    // pq.push(100);
    // cout << pq.top() << endl;
    // pq.pop(); // pop 100
    // pq.pop(); // pop 30
    // cout << pq.top() << endl;

    // cout << pq.size() << endl;
    // cout << pq.empty() << endl;



    // for minimum priority queue;
    priority_queue<int, vector<int>, greater<int>> pq;

    pq.push(10);
    pq.push(5);
    pq.push(3);

    cout << pq.top() << endl;
    pq.push(1);
    cout << pq.top() << endl;
    pq.pop(); // pop 1
    pq.pop(); // pop 3
    cout << pq.top() << endl;

    cout << pq.size() << endl;
    cout << pq.empty() << endl;
    return 0;
}