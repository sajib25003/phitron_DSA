#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    map<string, int> mp;

    while (ss >> word) // NlogN //in nested loop N*N*logN
    {
        mp[word]++; // logN
    }

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " : " << it->second << endl;
    }

    return 0;
}