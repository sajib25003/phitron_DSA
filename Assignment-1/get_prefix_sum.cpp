#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<long long int> v(n + 1), p_sum(n + 1);
    for (int i = 1; i <= n; i++)
    { // O(N)
        cin >> v[i];
    }
    p_sum[1] = v[1];
    for (int i = 2; i <= n; i++)
    {
        p_sum[i] = p_sum[i - 1] + v[i];
    }

    reverse(p_sum.begin() + 1, p_sum.end());

    for (int i = 1; i <= n; i++)
    {
        cout << p_sum[i] << " ";
    }

    return 0;
}