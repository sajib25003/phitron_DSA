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
    if (tail != NULL)
    {
        tail->next = newNode;
    }
    tail = newNode;
}

void insert_at_any_position(Node *&head, int idx, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i < idx; i++)
    {
        tmp = tmp->next;
    }
    cout << tmp->val << endl;
    newNode->next = tmp->next;
    tmp->next->prev = newNode;
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

    // Node *head = NULL;
    // Node *tail = NULL;
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    head->next = a;
    a->prev = head;
    a->next = tail;
    tail->prev = a;

    // print_forward(head);
    // print_backward(tail);
    // insert_at_head(head, tail, 100);
    // insert_at_tail(head, tail, 300);
    insert_at_any_position(head, 2, 200);
    print_forward(head);

    return 0;
}