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

void insertAtHead(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
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
    insertAtHead(head, 100);
    insertAtHead(head, 300);
    insertAtHead(head, 200);
    printLinkedList(head);
    return 0;
}