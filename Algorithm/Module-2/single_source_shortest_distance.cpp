#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1005];
bool visited[1005];
int level[1005];

void bfs(int src) // Overall O(V+E), space complexity O(V)
{
    queue<int> q; // space complexity O(V)
    q.push(src);
    visited[src] = true;
    level[src] = 0;
    while (!q.empty()) // O(V)
    {
        // ber kore ana
        int par = q.front();
        q.pop();
        // ber kore ana node niye kaaj kora
        // cout << par << " ";
        // children gula push kora
        for (int child : adj_list[par]) // O(E)
        {
            if (!visited[child])
            {
                q.push(child);
                visited[child] = true;
                level[child] = level[par] + 1;
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    memset(visited, false, sizeof(visited));
    memset(level, -1, sizeof(level));
    int src, des;
    cin >> src >> des;
    bfs(src);

    cout << level[des];

    // for (int i = 0; i < n; i++)
    // {
    //     cout << i << " : " << level[i] << endl;
    // }

    return 0;
}