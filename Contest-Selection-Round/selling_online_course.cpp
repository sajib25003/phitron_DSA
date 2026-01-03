#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    if (n == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    // cout << n << endl;
    long long int sell_count = 0;
    double commission = n * 20.0 / 100.0;

    if (commission == 0)
    {
        sell_count = 0;
        cout << sell_count << endl;
        return 0;
    }
    else if (commission > 0 && commission <= 100)
    {
        sell_count = ceil(100.0 / commission);
        cout << sell_count << endl;
        return 0;
    }
    else
    {
        sell_count = 1;
        cout << sell_count << endl;
        return 0;
    }

    return 0;
}