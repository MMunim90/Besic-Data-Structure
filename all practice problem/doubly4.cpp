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
    head->prev = newNode;
    head = newNode;
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

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void insert_at_any_pos(Node* temp, int val, int idx)
{
    Node* newNode = new Node(val);

    for(int i=1; i<idx; i++)
    {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;
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

void print_left_to_right(Node* temp)
{
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_right_to_left(Node* temp)
{
    while(temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    int q; cin >> q;

    while(q--)
    {
        int idx, val;
        cin >> idx >> val;

        int sz = list_size(head);

        if(idx > sz)
        {
            cout << "Invalid" << endl;
            continue;
        }

        if(idx == 0)
        {
            insert_at_head(head, tail, val);
        }
        else if(idx == sz)
        {
            insert_at_tail(head, tail, val);
        }
        else
        {
            insert_at_any_pos(head, val, idx);
        }

        print_left_to_right(head);
        print_right_to_left(tail);
    }

    return 0;
}

// 12, 53