#include <bits/stdc++.h>
using namespace std;

bool visited[105];
bool path_visited[105];
vector<int> adj_list[105];
bool cycle;

void dfs(int src)
{
    visited[src] = true;
    path_visited[src] = true;
    for (int child : adj_list[src])
    {
        if (visited[child] && path_visited[child])
            cycle = true;
        if (!visited[child])
        {
            dfs(child);
        }
    }
    path_visited[src] = false;
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
    }
    memset(visited, false, sizeof(visited));
    memset(path_visited, false, sizeof(path_visited));
    cycle = false;
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
            dfs(i);
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << i << " parent: " << parent[i] << endl;
    // }
    cout << (cycle ? "Cycle" : "No Cycle") << endl;

    return 0;
}