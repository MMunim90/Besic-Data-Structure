#include<bits/stdc++.h>
using namespace std;
int main()
{
    // capacity

    vector<int> v = {11, 22, 33};
    list<int> l(v.begin(), v.end());

    // l.clear();
    // cout << l.size() << endl;
    // cout << l.max_size() << endl;  // max size in this laptop = 768614336404564650

    // (l.empty()) ? cout << "Empty" << endl : cout << "Not Empty" << endl;

    // l.resize(2);
    l.resize(5, 44);

    for(int i : l)
    {
        cout << i << " ";
    }
    return 0;
}