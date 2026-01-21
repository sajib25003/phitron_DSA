#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y; // 8,2
        cin >> x >> y;

        int pages = 0;

        pages += y / 2;   // 1
        int remY = y % 2; // 0
        if (remY > 0)
        {
            pages++; //
        }

        int freeCell = 15 * pages - y * 4; // 7

        if (x > freeCell)
        {
            x -= freeCell; // 1
            pages += ceil(x / 15.0);
        }

        cout << pages << endl;
    }

    return 0;
}
