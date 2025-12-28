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

void print_list(Node *temp)
{
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

void sort_linked_list(Node* head)
{
    for(Node* i = head; i->next != NULL; i = i->next)
    {
        for(Node* j = i->next; j != NULL; j = j->next)
        {
            if(i->val > j->val)
            {
                swap(i->val, j->val);
            }
        }
    }
}

void remove_duplicate(Node *head)
{
    for (Node *i = head; i != NULL; i = i->next)
    {
        cout << i->val << " ";
        for (Node *j = i->next; j != NULL; )
        {
            if (i->val == j->val)
            {
                Node* deleteNode = j;
                j = j->next;
                i->next = j;
                delete deleteNode;
            }
            else
            {
                j = j->next;
            }
        }
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

    sort_linked_list(head);
    remove_duplicate(head);
    // print_list(head);
    return 0;
}