#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n; 

    stack<char> undoStack, redoStack;

    while (n--)
    {
        string str; cin >> str;

        if(str == "TYPE")
        {
            char x; cin >> x;
            undoStack.push(x);

            while(!redoStack.empty())
            {
                redoStack.pop();
            }
        }

        else if(str == "UNDO")
        {
            if(!undoStack.empty())
            {
                redoStack.push(undoStack.top());
                undoStack.pop();
            }
        }

        else if(str == "REDO")
        {
            if(!redoStack.empty())
            {
                undoStack.push(redoStack.top());
                redoStack.pop();
            }
        }
    }

    string result;
    while(!undoStack.empty())
    {
        result.push_back(undoStack.top());
        undoStack.pop();
    }

    reverse(result.begin(), result.end());

    cout << result << endl;
    
    return 0;
}