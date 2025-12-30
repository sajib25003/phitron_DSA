#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insertAtTail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = tail->next; // or tail = newNode;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insertAtTail(head, tail, val);
    }

    if (head == NULL)
    {
        cout << 0 << endl;
        return 0;
    }

    long long int max = head->val;
    long long int min = head->val;
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->val > max)
        {
            max = temp->val;
        }
        if (temp->val < min)
        {
            min = temp->val;
        }
        temp = temp->next;
    }
    long long int difference = max - min;
    cout << difference << endl;

    return 0;
}