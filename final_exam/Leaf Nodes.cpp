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

void leaf_node(Node *root)
{
    if (root == NULL)
        return;

    vector<int> v;

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        if (f->left == NULL && f->right == NULL)
            v.push_back(f->val);

        if (f->left != NULL)
            q.push(f->left);
        if(f->right != NULL)
            q.push(f->right);
    }

    sort(v.begin(), v.end(), greater<int>());

    for(int i=0; i<v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{
    Node *root = input_tree();

    leaf_node(root);
    return 0;
}