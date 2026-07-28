#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

        if (s1.length() != s2.length())
        {
            cout << "NO" << endl;
            continue;
        }

        int freq1[26] = {0};
        int freq2[26] = {0};

        for (char c : s1)
        {
            freq1[c - 'a']++;
        }

        for (char c : s2)
        {
            freq2[c - 'a']++;
        }

        bool flag = true;

        for (int i = 0; i < 26; i++)
        {
            if (freq1[i] != freq2[i])
            {
                flag = false;
                break;
            }
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}