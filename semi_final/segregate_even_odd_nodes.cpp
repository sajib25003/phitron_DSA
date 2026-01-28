#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    list<int> l;
    while (n--)
    {
        int x;
        cin >> x;
        l.push_back(x);
    }
    list<int> l_even, l_odd;
    for (auto x : l)
    {
        if (x % 2 == 0)
        {
            l_even.push_back(x);
        }
        else
        {
            l_odd.push_back(x);
        }
    }
    l = l_even;
    l.insert(next(l.begin(), l.size()), l_odd.begin(), l_odd.end());

    for (auto val : l)
    {
        cout << val << " ";
    }

    return 0;
}