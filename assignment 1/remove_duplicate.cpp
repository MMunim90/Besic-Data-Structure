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

void insert_on_last(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

void remove_duplicate(Node *&head)
{
    if(head == NULL)
    {
        return;
    }
    for (Node *i = head; i != NULL; i = i->next)
    {
        Node* prev = i;
        
        for (Node *j = i->next; j != NULL; )
        {
            if (i->val == j->val)
            {
                Node* deleteNode = j;
                prev->next = j->next;
                j = j->next;
                delete deleteNode;
            }
            else
            {
                prev = j;
                j = j->next;
            }
        }
    }
}

void print_list(Node *temp)
{
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }

        insert_on_last(head, tail, val);
    }

    remove_duplicate(head);
    print_list(head);
    return 0;
}