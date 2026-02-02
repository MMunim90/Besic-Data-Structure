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
    if(val == -1) root = NULL;
    else root = new Node(val);

    queue<Node*> q;
    if(root) q.push(root);

    while (!q.empty())
    {
        Node* f = q.front();
        q.pop();

        Node *newLeft, *newRight;
        int l, r; cin >> l >> r;

        if(l == -1) newLeft = NULL;
        else newLeft = new Node(l);

        if(r == -1) newRight = NULL;
        else newRight = new Node(r);

        f->left = newLeft;
        f->right = newRight;

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
    
    return root;
}

bool search(Node *root, int val)
{
    if (root == NULL)
        return false;
    if (root->val == val)
        return true;

    if (val < root->val)
        return search(root->left, val);
    else if (val > root->val)
        return search(root->right, val);
}

int main()
{
    Node *root = input_tree();
    int val;
    cin >> val;

    if(search(root, val)) cout << "Found" << endl;
    else cout << "Not Found" << endl;
    return 0;
}