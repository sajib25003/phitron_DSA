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
    if (root != NULL)
        q.push(root);

    while (!q.empty())
    {
        // parent node creation and getting the value
        Node *p = q.front();
        q.pop();

        // child node creation and value insertion
        int l, r;
        cin >> l >> r;
        Node *my_left, *my_right;
        if (l == -1)
            my_left = NULL;
        else
            my_left = new Node(l);
        if (r == -1)
            my_right = NULL;
        else
            my_right = new Node(r);

        // child node connection with parent
        p->left = my_left;
        p->right = my_right;

        // push children to queue
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

int sum = 0;
int sum_without_leaf(Node *root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 0;
    else
    {
        sum += root->val; // 0 + 10
    }
    if (root->left)
        sum_without_leaf(root->left); // 20
    if (root->right)
        sum_without_leaf(root->right);
    return sum;
}

int main()
{
    Node *root = input_tree();

    int val = sum_without_leaf(root);

    cout << val;

    return 0;
}