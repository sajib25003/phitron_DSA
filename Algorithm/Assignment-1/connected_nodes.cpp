#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> adj_list[n];
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    int t;
    cin >> t;
    while (t--)
    {
        int idx;
        cin >> idx;

        if (adj_list[idx].empty())
        {
            cout << -1 << endl;
        }
        else
        {
            sort(adj_list[idx].begin(), adj_list[idx].end(), greater<int>());
            for (int x : adj_list[idx]) // int or auto
            {
                cout << x << " ";
            }
            cout << endl;
        }
    }

    return 0;
}