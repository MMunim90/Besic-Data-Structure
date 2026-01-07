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

int list_size(Node* temp)
{
    int size = 0;
    while(temp != NULL)
    {
        size++;
        temp = temp->next;
    }

    return size;
}

void print_Node(Node *temp)
{
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    
    cout << endl;
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
        insert_at_tail(head, tail, val);
    }

    int size1 = list_size(head);

    head = NULL;
    tail = NULL;

    int val2;
    while (true)
    {
        cin >> val2;

        if (val2 == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val2);
    }
    int size2 = list_size(head);

    if(size1 == size2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}