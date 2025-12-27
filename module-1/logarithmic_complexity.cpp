#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    for (int i = 1; i <= n; i *= 2) {
        cout << i << endl;
    }
    
    
    return 0;
}

// Overall Time Complexity: O(log n) -> order of logarithmic n