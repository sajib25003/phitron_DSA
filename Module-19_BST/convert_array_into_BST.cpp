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

void levelorder(Node *root)
{
    if (root == NULL)
    {
        cout << "No Tree" << endl;
        return;
    }
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        // get the node and remove from queue
        Node *f = q.front();
        q.pop();
        // do the task
        cout << f->val << " ";
        // push the child in q if the child is available
        if (f->left != NULL) // f->left != NULL & f->left will do the same
            q.push(f->left);
        if (f->right != NULL)
            q.push(f->right);
    }
}

Node *convert_array_into_BST(int a[], int n, int l, int r)
{
    if (l > r)
        return NULL;
    int mid = (l + r) / 2;
    Node *root = new Node(a[mid]);
    Node *l_root = convert_array_into_BST(a, n, l, mid - 1);
    Node *r_root = convert_array_into_BST(a, n, mid + 1, r);
    root->left = l_root;
    root->right = r_root;

    return root;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    Node *root = convert_array_into_BST(a, n, 0, n - 1);
    levelorder(root);
    return 0;
}