#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1005];
bool visited[1005];
int level[1005];
int parent[1005];

void bfs(int src) // Overall O(V+E), space complexity O(V)
{
    queue<int> q; // space complexity O(V)
    q.push(src);
    visited[src] = true;
    level[src] = 0;
    // parent[src] = -1; // already set kora ache. na likhleo cholbe
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
                parent[child] = par;
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
    memset(parent, -1, sizeof(parent));
    int src, des;
    cin >> src >> des;
    bfs(src);
    vector<int> path;
    int node = des;
    while (node != -1)
    {
        // cout << node << " ";
        path.push_back(node);
        node = parent[node];
    }
    reverse(path.begin(), path.end());
    for (auto x : path)
    {
        cout << x << " ";
    }
    return 0;
}