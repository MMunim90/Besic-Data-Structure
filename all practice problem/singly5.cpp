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

Node* print_descending(Node* head)
{
    for(Node* i=head; i->next != NULL; i = i->next)
    {
        for(Node* j=i->next; j != NULL; j = j->next)
        {
            if(i->val < j->val)
            {
                i->val = i->val + j->val;
                j->val = i->val - j->val;
                i->val = i->val - j->val;
            }
        }
    }

    return head;
}

void print_list(Node* temp)
{
    while(temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
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

    print_descending(head);
    print_list(head);
    // cout << endl;

    return 0;
}