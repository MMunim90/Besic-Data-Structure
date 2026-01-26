#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* left;
        Node* right;
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
    if(root != NULL) 
        q.push(root);
    while (!q.empty())
    {
        Node* p = q.front();
        q.pop();

        Node *newLeft, *newRight;
        int l, r; cin >> l >> r;

        if(l == -1) newLeft = NULL;
        else newLeft = new Node(l);

        if(r == -1) newRight = NULL;
        else newRight = new Node(r);

        p->left = newLeft;
        p->right = newRight;


        if(p->left != NULL)
            q.push(p->left);
        if(p->right != NULL)
            q.push(p->right);
    }
     return root;
}

int count_leaf_nodes(Node* root)
{
    if(root == NULL)
        return 0;
    
    if(root->left == NULL && root->right == NULL)
        return 1;

    int l = count_leaf_nodes(root->left);
    int r = count_leaf_nodes(root->right);

    return l + r;
}

int main()
{
    Node* root = input_tree();

    int total_leaf_nodes = count_leaf_nodes(root);

    cout << total_leaf_nodes << endl;
    return 0;
}