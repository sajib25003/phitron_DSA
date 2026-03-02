#include <bits/stdc++.h>
using namespace std;

char grid[1005][1005];
bool visited[1005][1005];
pair<int, int> parent[1005][1005];
int n, m;
vector<pair<int, int>> dir = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    visited[si][sj] = true;
    parent[si][sj] = {-1, -1};
    while (!q.empty())
    {
        int si = q.front().first;
        int sj = q.front().second;
        q.pop();
        if (grid[si][sj] == 'D')
            return;
        for (auto d : dir)
        {
            int ci = si + d.first;
            int cj = sj + d.second;
            if (valid(ci, cj) && !visited[ci][cj] && (grid[ci][cj] == '.' || grid[ci][cj] == 'D'))
            {
                visited[ci][cj] = true;
                parent[ci][cj] = {si, sj};
                q.push({ci, cj});
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];

    memset(visited, false, sizeof(visited));
    int si = -1, sj = -1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 'R')
            {
                si = i;
                sj = j;
            }
        }
    }

    // cout << si << sj << endl;
    memset(visited, false, sizeof(visited));
    if (valid(si, sj))
        bfs(si, sj);
    int di = -1, dj = -1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 'D')
            {
                di = i;
                dj = j;
            }
        }
    }
    // cout << di << dj << endl;
    if (!visited[di][dj])
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                cout << grid[i][j];
            cout << endl;
        }
        return 0;
    }

    while (parent[di][dj].first != -1)
    {
        auto p = parent[di][dj];
        if (grid[p.first][p.second] == '.')
            grid[p.first][p.second] = 'X';

        di = p.first;
        dj = p.second;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << grid[i][j];
        cout << endl;
    }
    // for (auto x : path)
    // {
    //     cout << x << " ";
    // }
    return 0;
}