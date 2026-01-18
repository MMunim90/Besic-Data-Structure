#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
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
    newNode->prev = tail;
    tail = newNode;
}

void check_equal(Node *head, Node *tail2)
{
    if (head == NULL || tail2 == NULL)
    {
        cout << "YES" << endl;
        return;
    }

    Node *i;
    Node *j;

    bool is_equal = true;

    for (i = head, j = tail2; i != NULL; i = i->next, j = j->prev)
    {
        if (i->val != j->val)
        {
            cout << "NO" << endl;
            is_equal = false;
            return;
        }
    }

    if (is_equal)
    {
        cout << "YES" << endl;
    }
}

int size(Node *temp)
{
    int size = 0;
    while (temp != NULL)
    {
        size++;
        temp = temp->next;
    }

    return size;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int n, m;
    cin >> n >> m;

    if (n > m || m > n)
    {
        cout << "NO" << endl;
        return 0;
    }

    while (n--)
    {
        int val;
        cin >> val;
        insert_at_tail(head, tail, val);
    }

    Node *head2 = NULL;
    Node *tail2 = NULL;

    while (m--)
    {
        int val;
        cin >> val;
        insert_at_tail(head2, tail2, val);
    }

    check_equal(head, tail2);

    return 0;
}