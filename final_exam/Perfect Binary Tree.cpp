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

int count_Nodes(Node* root)
{
    if(root == NULL) return 0;

    int l = count_Nodes(root->left);
    int r = count_Nodes(root->right);

    return l + r + 1;
}

int max_depth(Node* root)
{
    if(root == NULL) return 0;

    if(root->left == NULL && root->right == NULL)
        return 1;
    
    int l = max_depth(root->left);
    int r = max_depth(root->right);

    return max(l,r)+1;
}

int main()
{
    Node *root = input_tree();

    int total_nodes = count_Nodes(root);
    int maxDepth = max_depth(root);

    if(total_nodes == pow(2, maxDepth)-1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}