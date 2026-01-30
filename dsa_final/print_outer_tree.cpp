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

void print_left_tree(Node *root)
{
    if (root == NULL)
        return;
    if (root->left)
        print_left_tree(root->left);
    else
        print_left_tree(root->right);
    cout << root->val << " ";
}
void print_right_tree(Node *root)
{
    if (root == NULL)
        return;
    cout << root->val << " ";

    if (root->right)
        print_right_tree(root->right);
    else
        print_right_tree(root->left);
}

int main()
{
    Node *root = input_tree();
    if (root->left)
    {
        print_left_tree(root);
        print_right_tree(root->right);
    }
    else
    {
        print_right_tree(root);
    }
    return 0;
}