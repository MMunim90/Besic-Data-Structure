#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

class myQueue
{
    public:
        Node* head = NULL;
        Node* tail = NULL;
        int sz = 0;

        void push(int val)  // O(1)
        {
            sz++;
            Node* newNode = new Node(val);

            if(head == NULL)
            {
                head = newNode;
                tail = newNode;
                return;
            }

            tail->next = newNode;
            tail = newNode;
        }

        void pop()  // O(1)
        {
            sz--;
            Node* deleteNode = head;
            head = head->next;
            if(head == NULL)
            {
                tail = NULL;
            }
            delete deleteNode;
        }

        int front() // O(1)
        {
            return head->val;
        }

        int back()  //O(1)
        {
            return tail->val;
        }

        int size() //O(1)
        {
            return sz;
        }

        bool empty()  // O(1)
        {
            return head == NULL;
        }
};

int main()
{
    
    return 0;
}