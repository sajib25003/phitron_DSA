// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int par[n];
        memset(par, 0, sizeof(par));
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            par[i] = x;
        }
        int max1 = INT_MIN, max2 = INT_MIN;
        int idx1 = -1, idx2 = -1;

        for (int i = 0; i < n; i++)
        {
            if (par[i] > max1)
            {
                max2 = max1;
                idx2 = idx1;

                max1 = par[i];
                idx1 = i;
            }
            else if (par[i] > max2)
            {
                max2 = par[i];
                idx2 = i;
            }
        }

        if (idx1 < idx2)
            cout << idx1 << " " << idx2 << endl;
        else
            cout << idx2 << " " << idx1 << endl;
    }

    return 0;
}