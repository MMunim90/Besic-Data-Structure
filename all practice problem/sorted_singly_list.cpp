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

void sorted_list(Node* temp)
{
    bool is_sorted = true;
    while(temp->next->next != NULL)
    {
        if(temp->val > temp->next->val)
        {
            is_sorted = false;
            cout << "NO" << endl;
            break;
        }

        temp = temp->next;
    }

    if(is_sorted)
    {
        cout << "YES" << endl;
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

    sorted_list(head);
    return 0;
}