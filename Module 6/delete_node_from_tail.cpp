#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

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
    }

    tail->next = newNode;
    tail = newNode;
}

void print_list(Node* temp)
{
    while(temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

void delete_at_tail(Node* temp, Node* &tail)
{
    while(temp->next->next != NULL)
    {
        temp = temp->next;
    }

    Node* deleteNode = tail;
    tail = temp;
    tail->next = NULL;
    delete deleteNode;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while(true)
    {
        cin >> val;
        if(val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }
    
    cout << "Tail before delete: " << tail->val << endl;
    delete_at_tail(head, tail);
    print_list(head);
    cout << endl << "Tail after delete: " << tail->val << endl;
    return 0;
}