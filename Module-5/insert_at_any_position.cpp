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

void insertAtAnyPosition(Node *&head, int idx, int val)
{
    Node *newNode = new Node(val);
    // if (idx == 0) // insert at head
    // {
    //     newNode->next = head;
    //     head = newNode;
    //     return;
    // }
    Node *temp = head;
    for (int i = 0; i < idx - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next; // tmp->next er address newNode er next e diye dilam
    temp->next = newNode;
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

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a;
    a->next = b;
    // Insert at head
    insertAtAnyPosition(head, 2, 100);
    printLinkedList(head);
    return 0;
}