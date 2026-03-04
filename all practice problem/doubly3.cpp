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

void print_node(Node* temp)
{
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int list_size(Node* temp)
{
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    
    return count;
}

void palindrome(Node* head, Node* tail, int size)
{
    Node* i = head;
    Node* j = tail;
    bool is_palindrome = true;
    size = size / 2;

    while (size--)
    {
        if(i->val != j->val)
        {
            is_palindrome = false;
            break;
        }

        i = i->next;
        j = j->prev;
    }
    
    if(is_palindrome) cout << "YES" << endl;
    else cout << "NO" << endl;
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
    
    // print_node(head);
    int size = list_size(head);

    palindrome(head, tail, size);
    return 0;
}