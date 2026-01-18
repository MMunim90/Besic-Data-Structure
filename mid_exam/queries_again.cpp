#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_head(Node* &head, Node* &tail, int val)
{
    Node* newNode = new Node(val);
    if(head == NULL)
    {
        head == NULL;
        tail == NULL;
        return;
    }

    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insert_at_any_pos(Node* head, Node* tail, int idx, int val)
{
    Node* newNode = new Node(val);

    Node* temp = head;

    for(int i=1; i<idx; i++)
    {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;
}

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
    newNode->prev = tail;
    tail = newNode;
}

int size(Node *temp)
{
    int size = 0;
    while (temp != NULL)
    {
        size++;
        temp = temp->next;
    }

    return size;
}

void print_left(Node* temp)
{
    cout << "L -> ";
    while(temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_right(Node* temp)
{
    cout << "R -> ";
    while(temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;

    while (q--)
    {
        int idx, val;
        cin >> idx >> val;

        int sz = size(head);
        if(sz < idx)
        {
            cout << "Invalid" << endl;
            continue;
        }
        else if(sz == idx)
        {
            insert_at_tail(head, tail, val);
        }
        else if(idx == 0)
        {
            insert_at_head(head, tail, val);
        }
        else
        {
            insert_at_any_pos(head, tail, idx, val);
        }


        print_left(head);
        print_right(tail);
    }

    return 0;
}