#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int length = s.size();
    bool isFound = false;
    for (int i = 0; i < length; i++)
    {
        if (s.find(s[i]) == s.rfind(s[i]))
        {
            isFound = true;
            cout << s[i] << endl;
            break;
        }
    }
    if (!isFound)
    {
        cout << -1 << endl;
    }

    return 0;
}