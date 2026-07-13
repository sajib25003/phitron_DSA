#include <bits/stdc++.h>
using namespace std;

int val[1005], weight[1005];

int knapsack(int i, int mx_wt)
{
    if (i < 0 || mx_wt <= 0)
    {
        return 0;
    }
    if (weight[i] <= mx_wt)
    {
        int option_1 = knapsack(i - 1, mx_wt - weight[i]) + val[i];
        int option_2 = knapsack(i - 1, mx_wt);
        return max(option_1, option_2);
    }
    else
    {
        return knapsack(i - 1, mx_wt);
    }
}

int main()
{
    int n, mx_wt;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> val[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> weight[i];
    }
    cin >> mx_wt;
    cout << knapsack(n - 1, mx_wt) << endl;

    return 0;
}