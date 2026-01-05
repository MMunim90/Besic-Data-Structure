#include<bits/stdc++.h>
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

void print_forword(Node* temp)
{
    while(temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

void print_backword(Node* temp)
{
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    
}

int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);

    head->next = a;
    a->prev = head;

    a->next = tail;
    tail->prev = a;

    print_forword(head);
    cout << endl;
    print_backword(tail);
    return 0;
}