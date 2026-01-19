#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        // cout << a << b << c << endl;
        // cout << a+b+c << endl;

        int equal_point = (a + b + c) / 3;

        // cout << equal_point << endl;

        int far_a = equal_point - a;
        a += far_a;
        c -= far_a;
        // cout << far_a << " " << a << " " << c << endl;

        if (c >= b)
        {
            int far_b = equal_point - b;
            b += far_b;
            c -= far_b;

        // cout << a << " " << b << " " << c << endl;

            (a == b && b == c) ? cout << "YES" << endl : cout << "NO" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}