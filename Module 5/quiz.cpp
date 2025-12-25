// #include<bits/stdc++.h>
// using namespace std;

// int func(int *p)
// {
//     *p = 20;
// }

// int main()
// {
//     int val = 10;
//     int *ptr = &val;

//     func(ptr);
//     cout << *ptr << endl;
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int func(int *p)
// {
//     p = NULL;
// }

// int main()
// {
//     int val = 10;
//     int *ptr = &val;

//     func(ptr);
//     cout << *ptr << endl;
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

int func(int *&p)
{
    p = NULL;
}

int main()
{
    int val = 10;
    int *ptr = &val;

    func(ptr);
    cout << ptr << endl;
    return 0;
}