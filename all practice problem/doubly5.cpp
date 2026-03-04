#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* next;
        Node* prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

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
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;
    tail = newNode;
    
}

void ascending(Node* head)
{
    for(Node* i=head; i->next->next != NULL; i = i->next)
    {
        for(Node* j=i->next; j->next != NULL; j = j->next)
        {
            if(i->val > j->val)
            {
                i->val = i->val + j->val;
                j->val = i->val - j->val;
                i->val = i->val - j->val;
            }
        }
    }
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

    while (1)
    {
        int n; cin >> n;
        if(n == -1) break;

        insert_at_tail(head, tail, n);
    }

    ascending(head);
    print_list(head);
    
    return 0;
}