#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }

    while (!st.empty()) // this condition is must for pop and top
    {
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}