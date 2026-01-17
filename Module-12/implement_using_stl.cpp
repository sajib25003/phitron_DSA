#include <bits/stdc++.h>
using namespace std;

int main()
{

    queue<int> q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }
    // if (!q.empty())
    // {
    //     q.pop();
    // }
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}