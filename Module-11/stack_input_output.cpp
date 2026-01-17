#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    vector<int> v;

    void push(int val)
    {
        v.push_back(val); // insert an element at last position
    }

    void pop()
    {
        v.pop_back(); // delete last element
    }

    int top()
    {
        return v.back(); // return last element
    }

    int size()
    {
        return v.size(); // return size of stack
    }

    bool empty()
    {
        return v.empty(); // return true if stack is empty
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