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

void print_reverse(Node* temp)
{
    if(temp == NULL) return;

    print_reverse(temp->next);
    cout << temp->val << " ";
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    while (true)
    {
        int n; cin >> n;
        if(n == -1) break;

        insert_at_tail(head, tail, n);
     }

     print_reverse(head);
    
    return 0;
}