#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n;

    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> silent;
    for (int i = 1; i < n - 1; i++)
    {
        if (a[i] < a[i - 1] && a[i] < a[i + 1])
        {
            silent.push_back(i); // storing index
        }
    }
    // for (int i = 0; i < silent.size(); i++)
    // {
    //     cout << silent[i] << " ";
    // }
    // cout << endl;

    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;

        // binary search on silent array
        int cnt = upper_bound(silent.begin(), silent.end(), r - 2) -
                  lower_bound(silent.begin(), silent.end(), l);

        cout << cnt << endl;
    }

    return 0;
}
