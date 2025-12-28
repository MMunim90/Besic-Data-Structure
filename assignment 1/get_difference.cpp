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

void find_differ(Node* head)
{
    Node* temp = head;
    int maxVal = temp->val;
    int minVal = temp->val;

    while(temp != NULL)
    {
        if(temp->val > maxVal)
        {
            maxVal = temp->val;
        }
        if(temp->val < minVal)
        {
            minVal = temp->val;
        }

        temp = temp->next;
    }

    cout << maxVal - minVal << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_on_last(head, tail, val);
    }

    find_differ(head);

    return 0;
}