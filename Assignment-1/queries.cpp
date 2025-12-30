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
void insertAtHead(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

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
void printLinkedList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
void deleteAtAnyPosition(Node *&head, Node *&tail, int idx)
{
    if (head == NULL)
    {
        return;
    }
    if (idx == 0)
    {
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;

        return;
    }

    Node *temp = head;
    for (int i = 0; i < idx - 1; i++)
    {
        if (temp == NULL || temp->next == NULL)
        {
            return; // Index out of bounds
        }
        temp = temp->next;
    }

    Node *deleteNode = temp->next;
    if (deleteNode == NULL)
    {
        return;
    }
    temp->next = deleteNode->next; // or temp -> next -> next

    if (deleteNode == tail) // deleting last node
    {
        tail = temp;
    }
    delete deleteNode;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;
    while (q--)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            insertAtHead(head, tail, v);
        }
        else if (x == 1)
        {
            insertAtTail(head, tail, v);
        }
        else if (x == 2)
        {
            deleteAtAnyPosition(head, tail, v);
        }
        printLinkedList(head);
    }

    return 0;
}