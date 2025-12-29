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

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

void delete_from_any_pos(Node *&head, int idx)
{
    Node *temp = head;
    for (int i = 0; i < idx; i++)
    {
        temp = temp->next;
    }

    Node *deletedNode = temp->next;
    temp->next = temp->next->next;
    delete deletedNode;
}

void delete_from_head(Node* &head)
{
    Node* deleteNode = head;

    head = head->next;

    delete deleteNode;
}

int calculate_size(Node *temp)
{
    int sz = 0;
    while (temp != NULL)
    {
        sz++;
        temp = temp->next;
    }
    return sz;
}

void print_list(Node *temp)
{
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;
    while (q--)
    {
        int x, v;
        cin >> x >> v;

        if (x == 0)
        {
            insert_at_head(head, tail, v);
            // print_list(head);
        }
        else if (x == 1)
        {
            insert_at_tail(head, tail, v);
            // print_list(head);
        }
        else if (x == 2)
        {
            int sz = calculate_size(head);
            cout << sz << endl;
            if (v < 0 || v > sz)
            {
                // print_list(head);
                continue;
            }
            else
            {
                delete_from_any_pos(head, v);
                // print_list(head);
            }
        }
    }

    return 0;
}