#include <bits/stdc++.h>
using namespace std;

int main()
{

    map<string, int> mp;
    int fre[100];
    fre[5] = 20;

    mp["ashik"] = 4; // mapName[key]=value;
    // complexity logN
    // used for count.
    // jeshob problem frequency array diye kora possible na only segular jonno map use korte hoy

    mp["hassan"] = 7; // mapName[key]=value;
    mp["sajib"] = 11; // mapName[key]=value;

    // cout << mp["sajib"] << endl; // if a key is not in map output will be 0(zero)

    for (auto it = mp.begin(); it != mp.end(); it++) // O(NlogN)
    {
        cout << it->first << " : " << it->second << endl;
    }

    if (mp.count("hamim"))
    {
        cout << "Yes";
    }
    else
        cout << "No";
    return 0;
}