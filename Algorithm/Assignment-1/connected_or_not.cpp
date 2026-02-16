#include <bits/stdc++.h>
using namespace std;
int n, e;
vector<int> adj_list[1001];

void check_connection(int src, int des)
{
    if (src == des)
    {
        cout << "YES" << endl;
        return;
    }

    for (int x : adj_list[src]) // int or auto
    {
        if (x == des)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
    return;
}

int main()
{

    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
    }
    int t;
    cin >> t;
    while (t--)
    {
        int src, des;
        cin >> src >> des;
        check_connection(src, des);
    }

    return 0;
}