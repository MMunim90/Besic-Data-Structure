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

void level_order(Node* root)
{
    queue<Node*> q;
    q.push(root);

    while (!q.empty())
    {
        Node* f = q.front();
        q.pop();

        cout << f->val << " ";

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }

}

Node* convert(int arr[], int l, int r)
{
    if(l > r)
        return NULL;
    int mid = (l+r) / 2;
    Node* root = new Node(arr[mid]);
    Node* leftroot = convert(arr, l, mid-1);
    Node* rightroot = convert(arr, mid+1, r);

    root->left = leftroot;
    root->right = rightroot;

    return root;
}

int main()
{
    int n; cin >> n;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    Node* root = convert(arr, 0, n-1);
    level_order(root);
    return 0;
}