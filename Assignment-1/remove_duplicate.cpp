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

void removeDuplicates(Node *&head)
{
    Node *current = head;

    while (current != NULL)
    {
        Node *prev = current;
        Node *temp = current->next;

        while (temp != NULL)
        {
            if (temp->val == current->val)
            {
                Node *deleteNode = temp;
                prev->next = temp->next;
                temp = temp->next;
                delete deleteNode;
            }
            else
            {
                prev = temp;
                temp = temp->next;
            }
        }

        current = current->next;
    }
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
    removeDuplicates(head);
    printLinkedList(head);

    return 0;
}