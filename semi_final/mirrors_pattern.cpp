#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << 1;
        return 0;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << i;
    }
    cout << endl;
    int num = n;
    for (int i = 1; i <= n - 2; i++)
    {
        cout << i + 1;
        for (int j = 0; j < n - 2; j++)
        {
            cout << " ";
        }
        cout << num - 1;
        cout << endl;
        num--;
    }

    for (int i = n; i > 0; i--)
    {
        cout << i;
    }
    return 0;
}