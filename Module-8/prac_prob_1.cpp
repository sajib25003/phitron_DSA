#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    newNode->prev = tail;
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void print_forward(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
void compare(Node *&head, Node *&head1, Node *&tail, Node *&tail1)
{
    Node *tmp1 = head;
    Node *tmp2 = head1;
    while (tmp1 != NULL && tmp2 != NULL)
    {
        if (tmp1->val != tmp2->val)
        {
            cout << "NO" << endl;
            return;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }
    if (tmp1 != NULL || tmp2 != NULL)
    {
        cout << "NO" << endl;
        return;
    }
    else
    {

        cout << "YES" << endl;
    }
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;
    Node *head1 = NULL;
    Node *tail1 = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head1, tail1, val);
    }

    // print_forward(head);
    // cout << endl;
    // print_forward(head1);
    compare(head, head1, tail, tail1);

    return 0;
}