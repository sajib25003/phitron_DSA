#include <bits/stdc++.h>
using namespace std;

int dist[1005][1005];
bool visited[1005][1005];
int t, n, m, cnt, ki, kj, qi, qj;

vector<pair<int, int>> dir = {{-1, -2}, {-2, -1}, {-2, 1}, {-1, 2}, {1, 2}, {2, 1}, {2, -1}, {1, -2}};
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
    dist[si][sj] = 0;

    while (!q.empty())
    {
        int pi = q.front().first;
        int pj = q.front().second;
        q.pop();

        if (pi == qi && pj == qj)
        {
            cnt = dist[pi][pj];
            return;
        }

        for (auto d : dir)
        {
            int ci = pi + d.first;
            int cj = pj + d.second;

            if (valid(ci, cj) && !visited[ci][cj])
            {
                visited[ci][cj] = true;
                dist[ci][cj] = dist[pi][pj] + 1;
                q.push({ci, cj});
            }
        }
    }

    cnt = -1;
}

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n >> m >> ki >> kj >> qi >> qj;
        memset(visited, false, sizeof(visited));
        memset(dist, -1, sizeof(dist));

        cnt = -1;
        bfs(ki, kj);
        cout << cnt << endl;
    }
    return 0;
}