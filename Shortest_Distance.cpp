#include <bits/stdc++.h>
using namespace std;

const int N = 105;
long long dis[N][N];

int main()
{
    int n, e;
    cin >> n >> e;

    // initialize
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
                dis[i][j] = 0;
            else
                dis[i][j] = LLONG_MAX;
        }
    }

    // edges
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        // handle multiple edges
        dis[a][b] = min(dis[a][b], (long long)c);
    }

    // Floyd Warshall
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (dis[i][k] != LLONG_MAX && dis[k][j] != LLONG_MAX)
                {
                    dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]);
                }
            }
        }
    }

    int q;
    cin >> q;
    while (q--)
    {
        int x, y;
        cin >> x >> y;

        if (dis[x][y] == LLONG_MAX)
            cout << -1 << endl;
        else
            cout << dis[x][y] << endl;
    }

    return 0;
}