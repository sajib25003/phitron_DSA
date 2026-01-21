#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int mn = a[0];
        int mx = a[n - 1];
        if (mn % 2 == mx % 2)
        {
            cout << 0 << endl;
        }
        else
        {
            int i = 0, j = n - 1, cnt_mn = 0, cnt_mx = 0;
            while (a[i] % 2 != mx % 2)
            {
                i++;
                cnt_mn++;
            }
            while (a[j] % 2 != mn % 2)
            {
                j--;
                cnt_mx++;
            }
            if (cnt_mn < cnt_mx)
                cout << cnt_mn << endl;
            else
                cout << cnt_mx << endl;
        }
    }

    return 0;
}