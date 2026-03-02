#include <bits/stdc++.h>
using namespace std;

char grid[1005][1005];
bool visited[1005][1005];
vector<pair<int, int>> op = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int n, m;

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}
void dfs(int si, int sj)
{
    visited[si][sj] = true;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + op[i].first;
        int cj = sj + op[i].second;
        if (valid(ci, cj) && !visited[ci][cj] && (grid[ci][cj] == '.'))
        {
            dfs(ci, cj);
        }
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];

    int si, sj, di, dj;

    cin >> si >> sj >> di >> dj;
    memset(visited, false, sizeof(visited));
    if (valid(si, sj))
        dfs(si, sj);

    if (visited[di][dj] && valid(di, dj))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}