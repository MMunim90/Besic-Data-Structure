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

Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        Node *newLeft, *newRight;
        int l, r;
        cin >> l >> r;

        if (l == -1)
            newLeft = NULL;
        else
            newLeft = new Node(l);

        if (r == -1)
            newRight = NULL;
        else
            newRight = new Node(r);

        f->left = newLeft;
        f->right = newRight;

        if (f->left != NULL)
            q.push(f->left);
        if (f->right != NULL)
            q.push(f->right);
    }

    return root;
}

int count_nodes(Node *root)
{
    if (root == NULL)
        return 0;

    if (root->left == NULL && root->right == NULL)
        return 0;

    int l = count_nodes(root->left);
    int r = count_nodes(root->right);

    return l + r + root->val;
}

int main()
{
    Node *root = input_tree();

    cout << count_nodes(root) << endl;
    return 0;
}