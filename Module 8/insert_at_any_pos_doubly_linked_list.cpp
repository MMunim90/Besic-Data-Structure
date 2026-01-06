#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node *next;
        Node* prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_any_pos(Node* head, int idx, int val)
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

void print_list(Node* temp)
{
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    
}

int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(50);
    Node* d = new Node(60);

    head->next = a;
    a->prev = head;

    a->next = b;
    b->prev = a;

    b->next = c;
    c->prev = b;

    c->next = d;
    d->prev = c;
    
    insert_at_any_pos(head, 3, 40);
    insert_at_any_pos(head, 1, 70);
    print_list(head);
    return 0;
}