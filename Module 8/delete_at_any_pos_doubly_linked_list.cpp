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

// complexity O(N)
void delete_at_any_pos(Node* head, int idx)
{
    Node* temp = head;

    for(int i=1; i<idx; i++)
    {
        temp = temp->next;
    }

    Node* deleteNode = temp->next;
    temp->next = temp->next->next;
    temp->next->prev = temp;
    delete deleteNode;
}

void print_forword(Node* temp)
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
    Node* tail = new Node(30);

    head->next = a;
    a->prev = head;

    a->next = tail;
    tail->prev = a;

    delete_at_any_pos(head, 1);
    print_forword(head);
    return 0;
}