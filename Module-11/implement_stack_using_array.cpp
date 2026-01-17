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
    st.push(10);
    st.push(20);
    st.push(30);
    if (!st.empty())
        st.pop();
    if (!st.empty())
        st.pop();
    // st.pop();

    // corner case. in empty stack it shows runtime error in online judge and here it shows -n
    if (!st.empty())
        cout << "top element: " << st.top() << endl;
    // it should be checked before accessing pop and top element from stack
    return 0;
}