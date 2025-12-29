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

void insert_on_last(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
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

    int freq[100005] = {0};

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }

        if(freq[val] == 0)
        {
            insert_on_last(head, tail, val);
            freq[val]++;
        }
    }

    print_list(head);
    return 0;
}