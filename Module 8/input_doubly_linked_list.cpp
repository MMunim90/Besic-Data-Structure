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

    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while (cin >> val)
    {
        insert_at_tail(head, tail, val);
    }
    
    print_list(head);
    return 0;
}