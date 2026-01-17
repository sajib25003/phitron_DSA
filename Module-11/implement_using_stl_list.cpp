#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    list<int> lst; // behind the scene doubly linked list is used

    void push(int val)
    {
        lst.push_back(val); // O(1) : insert an element at last position
    }

    void pop()
    {
        lst.pop_back(); // O(1):  delete last element
    }

    int top()
    {
        return lst.back(); // O(1):  return last element
    }

    int size()
    {
        return lst.size(); // O(1):  return size of stack
    }

    bool empty()
    {
        return lst.empty(); // O(1):  return true if stack is empty
    }
};

main()
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