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

class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

    void pop()
    {
        sz--;
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        if (head == NULL)
        {
            tail == NULL;
            return;
        }
        head->prev = NULL;
    }

    int front()
    {
        return head->val;
    }

    int back()
    {
        return tail->val;
    }

    int size()
    {
        return sz;
    }

    bool empty()
    {
        return head == NULL; // or sz == 0
    }
};

int main()
{
    int n, m;
    cin >> n >> m;
    // cout << n << " " << m;
    myStack st;
    myQueue q;
    if (n != m)
    {
        cout << "NO";
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }
    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }
    // cout << st.size() << " " << q.size() << endl;
    // return 0;
    while (!st.empty() && !q.empty())
    {
        // cout << st.size() << " " << q.size() << endl;

        if (q.front() != st.top())
        {
            cout << "NO";
            break;
        }
        else
        {
            q.pop();
            st.pop();
        }
    }
    if (st.empty() && q.empty())
    {
        cout << "YES";
    }

    return 0;
}