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
        vector<int> a(n);
        int count_alice = 0, count_bob = 0;
        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
                count_alice++;
            else
                count_bob++;
        }

        if (count_alice > count_bob)
            cout << "Alice" << endl;
        else if (count_bob > count_alice)
            cout << "Bob" << endl;
        else
            cout << "Alice" << endl;
    }

    return 0;
}