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

    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;
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

    Node* head1 = NULL;
    Node* tail1 = NULL;

    while(true)
    {
        int val; cin >> val;

        if(val == -1)
        {
            break;
        }
        insert_at_tail(head1, tail1, val);
    }

    bool is_same = true;

    if(list_size(head) != list_size(head1))
    {
        is_same = false;
    }
    else
    {
        Node* temp = head;
        while(temp != NULL)
        {
            if(head->val != head1->val)
            {
                is_same = false;
                break;
            }
            temp = temp->next;
        }
    }

    if(is_same)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}