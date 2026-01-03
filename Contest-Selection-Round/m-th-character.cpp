#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    // cout << s << endl;
    int n;
    cin >> n;
    // cout << n;

    int size = s.size();

    int charCount = 0;

    if (size % 2 == 0)
    {
        for (int i = 1; i < size; i += 2)
        {
            int tmp = s[i] - '0';
            charCount = charCount + tmp;
        }
    }
    char arr[charCount];
    for (int i = 0; i < charCount; i++)
    {
        // arr.push_back();
    }
    cout << charCount << " ";

    return 0;
}