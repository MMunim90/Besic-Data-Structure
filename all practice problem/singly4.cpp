#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_head(Node* &head, Node* &tail, int val)
{
    Node* newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head = newNode;
}

void insert_at_any_pos(Node* temp, int val, int idx)
{
    Node* newNode = new Node(val);

    for(int i=1; i<idx; i++)
    {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node* newNode = new Node(val);

    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    Node* temp = head;

    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
    tail = newNode;
}

int list_size(Node* temp)
{
    int size = 0;
    while (temp != NULL)
    {
        size++;
        temp = temp->next;
    }

    return size;
    
}

void print_list(Node* temp)
{
    while(temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    while(true)
    {
        int val; cin >> val;

        if(val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }

    int q; cin >> q;
    while (q--)
    {
        int idx, val; cin >> idx >> val;

        int size = list_size(head);

        if(idx > size)
        {
            cout << "Invalid" << endl;
        }
        else if(idx == 0)
        {
            insert_at_head(head, tail, val);
            print_list(head);
        }
        else if(idx == size)
        {
            insert_at_tail(head, tail, val);
            print_list(head);
        }
        else
        {
            insert_at_any_pos(head, val, idx);
            print_list(head);
        }
    }

    return 0;
}