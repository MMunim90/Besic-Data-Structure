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

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

int sum(Node *head, Node *tail, int idx)
{
    int Sum = 0;
    Node* Temp = head;
    for(int i=0; i<idx; i++)
    {
        Sum += Temp->val;
        Temp = Temp->next;
    }
    Sum -= Temp->val;

    return Sum;
}

void print_list(Node *temp)
{
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (cin >> val)
    {
        insert_at_tail(head, tail, val);
    }

    // print_list(head);
    int total = sum(head, tail, 3);
    cout << total << endl;
    return 0;
}