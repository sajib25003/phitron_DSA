#include <bits/stdc++.h>
using namespace std;

int val[1005], weight[1005];
int dp[1005][1005];

int knapsack(int i, int mx_wt)
{
    // base case
    if (i < 0 || mx_wt <= 0)
    {
        return 0;
    }

    // check existing in dp
    if (dp[i][mx_wt] != -1)
    {
        return dp[i][mx_wt];
    }

    if (weight[i] <= mx_wt)
    {
        int take = knapsack(i - 1, mx_wt - weight[i]) + val[i];
        int not_take = knapsack(i - 1, mx_wt);

        return dp[i][mx_wt] = max(take, not_take);
    }
    else
    {
        return dp[i][mx_wt] = knapsack(i - 1, mx_wt);
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, wt;
        cin >> n >> wt;

        for (int i = 0; i < n; i++)
        {
            cin >> weight[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> val[i];
        }

        // dp
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= wt; j++)
            {
                dp[i][j] = -1;
            }
        }

        cout << knapsack(n - 1, wt) << endl;
    }

    return 0;
}