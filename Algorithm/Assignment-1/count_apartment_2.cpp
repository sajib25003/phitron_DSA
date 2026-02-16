#include <bits/stdc++.h>
using namespace std;
char grid[1005][1005];
bool visited[1005][1005];
vector<pair<int, int>> op = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int n, m;
vector<int> rooms;

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}
int rm = 1; // 1

int dfs(int si, int sj) // 0, 2 // 1,2
{
    visited[si][sj] = true;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + op[i].first;
        int cj = sj + op[i].second;
        if (valid(ci, cj) && !visited[ci][cj] && grid[ci][cj] == '.') // 1,2
        {
            rm++; // 2
            dfs(ci, cj);
        }
    }
    return rm;
}

int main()
{

    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];

    memset(visited, false, sizeof(visited));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!visited[i][j] && grid[i][j] != '#')
            {
                // cout << i << " " << j << endl;
                int cnt = dfs(i, j); // 0,2
                rm = 1;
                // cout << cnt << endl;
                rooms.push_back(cnt);
            }
        }
    }
    sort(rooms.begin(), rooms.end());
    if (rooms.empty())
    {
        cout << 0;
    }
    else
    {

        for (auto r : rooms)
        {
            cout << r << " ";
        }
    }
    return 0;
}