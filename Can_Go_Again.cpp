// #include <bits/stdc++.h>
#include <iostream>
#include <algorithm>

using namespace std;

long long int dis[1005];
int n, e;
bool cycle = false;

class Edge
{
public:
    int a, b, c;
    Edge(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};

vector<Edge> edge_list;

void bellman_ford()
{

    for (int i = 1; i <= n - 1; i++)
    {
        for (auto ed : edge_list)
        {
            int a, b, c;
            a = ed.a;
            b = ed.b;
            c = ed.c;
            if (dis[a] != LONG_MAX && dis[a] + c < dis[b])
            {
                dis[b] = dis[a] + c;
            }
        }
    }

    // detecting negative cycle
    for (auto ed : edge_list) // O(E)
    {
        // relax here
        int a, b, c;
        a = ed.a;
        b = ed.b;
        c = ed.c;
        if (dis[a] != LONG_MAX && dis[a] + c < dis[b])
        {
            cycle = true;
        }
    }
}

int main()
{
    cin >> n >> e;
    while (e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        edge_list.push_back(Edge(a, b, w));
        // edge_list.push_back(Edge(b, a, w)); // for undirected graph
    }

    for (int i = 1; i <= n; i++)
    {
        dis[i] = LONG_MAX;
    }
    int src, tc;
    cin >> src >> tc;
    dis[src] = 0;

    bellman_ford();

    while (tc--)
    {
        int des;
        cin >> des;
        if (cycle)
        {
            cout << "Negative Cycle Detected" << endl;
            break;
        }
        else
        {
            if (dis[des] == LONG_MAX)
            {
                cout << "Not Possible" << endl;
            }
            else
            {
                cout << dis[des] << endl;
            }
        };
    }

    return 0;
}