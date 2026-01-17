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

class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val); // create a new node
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode; // connection to new node
        newNode->prev = tail; // back connection to previous tail
        tail = newNode;       // make new node as tail

        // complexity: O(1)
    }

    void pop()
    {
        sz--;
        Node *deleteNode = tail;
        tail = tail->prev;
        delete deleteNode;
        if (tail == NULL)
        {
            head = NULL;
            return;
        }
        tail->next = NULL;
    }

    int top()
    {
        return tail->val; // O(1):  return last element
    }

    int size()
    {
        return sz; // O(1):  return size of stack
    }

    bool empty()
    {
        return head == NULL; // O(1):  return true if stack is empty
    }
};

int main()
{
    myStack st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }

    // pop the top and get the next as top
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}