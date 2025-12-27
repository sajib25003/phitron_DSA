#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n; // O(1) -> order of 1
    cin >> n; // O(1) -> order of 1
    int sum = 0; // O(1) -> order of 1

    // using loop // O(n) -> order of n
    // for (int i = 1; i <= n; i++){
    //     sum += i;
    // }
    
    // using formula
    sum = n * (n + 1) / 2;
    
    
    
    cout << sum << endl; // O(1) -> order of 1
    
    
    return 0; // O(1) -> order of 1
}

// Overall Time Complexity: O(n) -> order of n (due to the loop, if used)
// Overall Time Complexity: O(1) -> order of 1 (using the formula)
// we will use the worst case time complexity which is O(n) -> order of n