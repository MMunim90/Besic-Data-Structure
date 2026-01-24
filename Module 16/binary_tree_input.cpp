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
    if(root != NULL) q.push(root);

    while (!q.empty())
    {
        // 1. ber kore ana
        Node* front = q.front();
        q.pop();

        // 2. work with that node
        int l, r; cin >> l >> r;
        Node *newLeft, *newRight;

        if(l == -1) newLeft = NULL;
        else newLeft = new Node(l);

        if(r == -1) newRight = NULL;
        else newRight = new Node(r);

        front->left = newLeft;
        front->right = newRight;

        // 3. push the children to that node
        if(front->left)
            q.push(front->left);
        if(front->right)
            q.push(front->right);
    }
    
    return root;
}

void level_order(Node* root)
{
    if(root == NULL)
    {
        cout << "No Tree" << endl;
        return;
    }

    queue<Node*> q;
    q.push(root);

    while (!q.empty())
    {
        //1. ber kore ana
        Node* front = q.front();
        q.pop();

        // 2. work with that node
        cout << front->val << " ";

        //3. push the children of that node

        if(front->left != NULL)
            q.push(front->left);
        if(front->right != NULL)
            q.push(front->right);
    }
    
}

int main()
{
    Node* root = input_tree();
    level_order(root);
    return 0;
}