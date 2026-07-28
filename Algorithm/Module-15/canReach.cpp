#include <bits/stdc++.h>
using namespace std;

bool dp[1000005];
bool vis[1000005];

bool canReach(int n)
{
    if (n == 1)
        return true;
    if (n < 1)
        return false;

    if (vis[n])
        return dp[n];

    vis[n] = true;

    bool ans = false;

    if (n % 2 == 0)
        ans = canReach(n / 2);

    if (!ans)
        ans = canReach(n - 3);

    dp[n] = ans;
    return ans;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        if (canReach(n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}