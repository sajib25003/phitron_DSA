#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    bool isDuplicate = false;
    for (int i = 0; i < n; i++)
    {
        if (find(v.begin() + i + 1, v.end(), v[i]) != v.end())
        {
            isDuplicate = true;
            break;
        }
    }
    if (isDuplicate)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}