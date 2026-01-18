#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<string> str;
    string s;
    while (cin >> s)
    {
        if (s == "end")
        {
            break;
        }
        str.push_back(s);
    }

    auto current_adr = str.begin();
    int q;
    cin >> q;
    while (q--)
    {
        string query;
        cin >> query;

        if (query == "visit")
        {
            string web_adr;
            cin >> web_adr;
            bool is_found = false;

            for (auto itr = str.begin(); itr != str.end(); itr++) // same loop using range based loop for(auto s : str)
            {
                if (*itr == web_adr)
                {
                    is_found = true;
                    cout << web_adr << endl;
                    current_adr = itr;
                    break;
                }
            }
            if (is_found == false)
            {
                cout << "Not Available" << endl;
            }
        }
        else if (query == "next")
        {
            if (next(current_adr) == str.end())
            {
                cout << "Not Available" << endl;
            }
            else
            {
                cout << *next(current_adr) << endl;
                current_adr = next(current_adr);
            }
        }
        else if (query == "prev")
        {
            if (current_adr == str.begin())
            {
                cout << "Not Available" << endl;
            }
            else
            {
                cout << *prev(current_adr) << endl;
                current_adr = prev(current_adr);
            }
        }
    }

    return 0;
}