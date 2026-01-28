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
    // Node *root = new Node(10);
    // Node *a = new Node(20);
    // Node *b = new Node(30);
    // Node *c = new Node(40);
    // Node *d = new Node(50);
    // Node *e = new Node(60);

    // root->left = a;
    // root->right = b;
    // a->left = c;
    // b->left = d;
    // b->right = e;
    Node *root = input_tree();

    levelorder(root);

    return 0;
}