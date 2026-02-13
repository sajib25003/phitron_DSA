#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1005];
bool visited[1005];

void bfs(int src) // Overall O(V+E), space complexity O(V)
{
    queue<int> q; // space complexity O(V)
    q.push(src);
    visited[src] = true;
    while (!q.empty()) // O(V)
    {
        // ber kore ana
        int par = q.front();
        q.pop();
        // ber kore ana node niye kaaj kora
        cout << par << " ";
        // children gula push kora
        for (int child : adj_list[par]) // O(E)
        {
            if (!visited[child])
            {
                q.push(child);
                visited[child] = true;
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
    bfs(0);

    return 0;
}