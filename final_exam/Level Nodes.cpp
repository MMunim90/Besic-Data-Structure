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

void levelNode(Node* root, int level)
{
    vector<int> v;
    bool valid = false;

    queue<pair<Node*, int>> q;

    if(root)
        q.push({root, 0});

    while(!q.empty())
    {
        pair<Node*, int> f = q.front();
        q.pop();

        Node* node = f.first;
        int lvl = f.second;

        if(lvl == level)
        {
            v.push_back(node->val);
            valid = true;
        }

        if(node->left)
            q.push({node->left, lvl+1});
        if(node->right)
            q.push({node->right, lvl+1});
    }

    if(!valid)
        cout << "Invalid" << endl;
    else
    {
        for(int i=0; i<v.size(); i++)
        {
            cout << v[i] << " ";
        }
    }
}

int main()
{
    Node *root = input_tree();
    int level; cin >> level;
    
    levelNode(root, level);
    return 0;
}