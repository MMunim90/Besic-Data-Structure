#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void find_duplicate(Node *head, Node *tail)
{
    bool found_duplicate = false;
    for (Node *i = head; i != NULL; i = i->next)
    {
        Node *current_Node = i;
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (current_Node->val == j->val)
            {
                cout << "YES" << endl;
                found_duplicate = true;
                break;
            }
        }
    }

    if (found_duplicate == false)
    {
        cout << "NO" << endl;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (cin >> val)
    {
        insert_at_tail(head, tail, val);
    }

    find_duplicate(head, tail);
    return 0;
}