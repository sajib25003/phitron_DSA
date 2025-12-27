#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    // 26 size vector, initially 0
    vector<int> freq(26, 0);

    // count frequency
    for (char c : s) {
        freq[c - 'a']++;
    }

    // print result
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            cout << char(i + 'a') << " : " << freq[i] << endl;
        }
    }

    return 0;
}
