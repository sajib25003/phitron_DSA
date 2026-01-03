// #include <bits/stdc++.h>

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;
    int arr[n][m];

    if (n == 1)
    {
        cout << "YES";
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int sum[n];
    for (int i = 0; i < n; i++)
    {
        sum[i] = 0;
        for (int j = 0; j < m; j++)
        {
            sum[i] += arr[i][j];
        }

        // cout << sum[i] << endl;
    }
    sort(sum, sum + n);
    for (int i = 0; i < n - 1; i++)
    {
        cout << sum[i] << " " << sum[i + 1] << " ";
        if (sum[i] != sum[i + 1])
        {
            for (int j = 0; j < m; j++)
            {
                if (arr[i][j] == 0)
                {
                    cout << arr[i][j] << " ";
                    cout << "YES";
                    return 0;
                }
                else
                {
                    cout << "NO";
                    return 0;
                }
            }
        }
    }

    cout << "YES";

    return 0;
}