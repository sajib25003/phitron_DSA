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
    if (root != NULL) // roo != NULL or root will do the same
        q.push(root);
    while (!q.empty())
    {
        // get the node
        Node *p = q.front(); // parent Node
        q.pop();

        // work with node
        int l, r;
        cin >> l >> r;
        Node *t_left, *t_right;
        if (l == -1)
            t_left = NULL;
        else
            t_left = new Node(l);
        if (r == -1)
            t_right = NULL;
        else
            t_right = new Node(r);

        p->left = t_left;
        p->right = t_right;
        // push the children if not NULL
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }

    return root;
}

void insert_in_BST(Node *&root, int val)
{
    if (root == NULL)
        root = new Node(val);
    if (root->val > val)
    {
        if (root->left == NULL)
            root->left = new Node(val);
        else
            insert_in_BST(root->left, val);
    }
    else
    {
        if (root->right == NULL)
            root->right = new Node(val);
        else
            insert_in_BST(root->right, val);
    }
}

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

int main()
{
    Node *root = input_tree();
    int val;
    cin >> val;
    insert_in_BST(root, val);
    insert_in_BST(root, 11);
    levelorder(root);

    return 0;
}