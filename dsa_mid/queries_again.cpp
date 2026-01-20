#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *prev;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};
void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    if (head != NULL)
    {
        head->prev = newNode;
    }
    head = newNode;
}
void insert_at_any_position(Node *&head, Node *&tail, int idx, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i < idx; i++)
    {
        tmp = tmp->next;
    }
    // cout << tmp->val << endl;
    newNode->next = tmp->next;
    // tmp->next->prev = newNode;
    if (tmp->next != NULL)
        tmp->next->prev = newNode;
    else
        tail = newNode;

    tmp->next = newNode;
    newNode->prev = tmp;
}

void print_forward(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void print_backward(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int n;
    cin >> n;
    int sz = 0;
    for (int i = 0; i < n; i++)
    {
        int x, v;
        cin >> x >> v;

        if (x == 0)
        {
            insert_at_head(head, tail, v);
            sz++;
            cout << "L -> ";
            print_forward(head);
            cout << "R -> ";
            print_backward(tail);
        }
        else if (x > 0 && x <= sz)
        {
            insert_at_any_position(head, tail, x, v);
            sz++;
            cout << "L -> ";
            print_forward(head);
            cout << "R -> ";
            print_backward(tail);
        }
        else
        {
            cout << "Invalid" << endl;
        }
    }

    return 0;
}