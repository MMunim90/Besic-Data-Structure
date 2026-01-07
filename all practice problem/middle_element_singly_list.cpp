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

int list_size(Node *temp)
{
    int size = 0;
    while (temp != NULL)
    {
        size++;
        temp = temp->next;
    }

    return size;
}

void print_odd_middle(Node *temp, int size)
{
    int half_size = ceil((float)size / 2);

    for (int i = 1; i < half_size; i++)
    {
        temp = temp->next;
    }

    cout << temp->val << endl;
}

void print_even_middle(Node *temp, int size)
{
    int half_size = ceil((float)size / 2);

    for (int i = 1; i < half_size; i++)
    {
        temp = temp->next;
    }

    cout << temp->val << " " << temp->next->val << endl;
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

    int size = list_size(head);

    if (size % 2 == 0)
    {
        print_even_middle(head, size);
    }
    else
    {
        print_odd_middle(head, size);
    }
    return 0;
}