#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int lcm(int a, int b)
{

    int g = max(a, b);

    int s = min(a, b);

    for (int i = g; i <= a * b; i += g)
    {
        if (i % s == 0)
            return i;
    }
}
bool check_increasing(int a, int b)
{
    if (b == 0)
    {
        return true;
    }
    return a <= b;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";

        cout << endl;
        // check if increasing
        bool is_increasing = true;
        for (int i = 0; i < n - 2; i++)
        {

            if (!check_increasing(a[i], a[i + 1]) || a[i] == m)
            {
                is_increasing = false;
                break;
            }
        }
        if (!is_increasing)
        {
            cout << "false" << endl;
        }
        else
        {
            cout << "true" << endl;
        }
    }

    return 0;
}