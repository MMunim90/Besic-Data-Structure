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

// complexity O(1)
void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node* newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
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
    // Node* head = new Node(10);
    // Node* a = new Node(20);
    // Node* tail = new Node(30);

    // head->next = a;
    // a->prev = head;

    // a->next = tail;
    // tail->prev = a;

    Node* head = NULL;
    Node* tail = NULL;

    insert_at_tail(head, tail, 40);
    insert_at_tail(head, tail, 50);
    print_list(head);
    return 0;
}