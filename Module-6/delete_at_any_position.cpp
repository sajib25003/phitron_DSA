#include <bits/stdc++.h>
// #include <iostream>
// #include <vector>
// #include <algorithm>
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
void printLinkedList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
    cout << endl;
}

void deleteAtAnyPosition(Node *&head, int idx)
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
        return; // Index out of bounds
    }
    temp->next = deleteNode->next; // or temp -> next -> next
    
    delete deleteNode;
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
    deleteAtAnyPosition(head, 2);
    printLinkedList(head);

    return 0;
}