#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    // cout << n << " " << m;
    stack<int> st;
    queue<int> q;
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