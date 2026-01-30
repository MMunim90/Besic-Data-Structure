#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* input_tree()
{
    int val; cin >> val;
    Node* root;

    if(val == -1)
        root = NULL;
    else
        root = new Node(val);
    
    queue<Node*> q;

    if(root)
        q.push(root);
    while(!q.empty())
    {
        Node* f = q.front();
        q.pop();

        int l, r; cin >> l >> r;
        Node *newLeft, *newRight;

        if(l == -1)
            newLeft = NULL;
        else
            newLeft = new Node(l);
        
        if(r == -1)
            newRight = NULL;
        else
            newRight = new Node(r);

        f->left = newLeft;
        f->right = newRight;

        if(f->left)
            q.push(f->left);
        if(f->right)
            q.push(f->right);
    }

    return root;
}

void leftOuter(Node* root)
{
    if(root->left)
    leftOuter(root->left);
    else if(root->right)
    leftOuter(root->right);

    if(root)
        cout << root->val << " ";
}

void rightOuter(Node* root)
{
    if(root)
        cout << root->val << " ";

    if(root->right)
        rightOuter(root->right);
    else if(root->left)
        rightOuter(root->left);
}

int main()
{
    Node *root = input_tree();

    if(root->left)
        leftOuter(root->left);
    if(root)
        cout << root->val << " ";
    if(root->right)
        rightOuter(root->right);
    return 0;
}