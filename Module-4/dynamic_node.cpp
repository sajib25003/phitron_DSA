// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
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
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);

    // (*head).next = a; // a nijei pointer so, &a likha lagbe na
    head->next = a; // same as above line
    a->next = b;
    b->next = c;
    // cout << head->val << endl; // head
    // cout << head->next->val << endl; //a
    // cout << head->next->next->val << endl; //b
    // cout << head->next->next->next->val << endl; //c
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
    // temp = head;
    // while (temp != NULL)
    // {
    //     cout << temp->val << endl;
    //     temp = temp->next;
    // }

    return 0;
}
