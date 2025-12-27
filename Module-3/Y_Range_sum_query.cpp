#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, q;
    cin >> n >> q;
    vector<long long int> v(n + 1), p_sum(n + 1);
    for (int i = 1; i <= n; i++)
    { // O(N)
        cin >> v[i];
    }
    p_sum[1] = v[1];
    for (int i = 2; i <= n; i++)
    { // O(N)
        p_sum[i] = p_sum[i - 1] + v[i];
    }

    while (q--)
    { 
        int l, r;
        cin >> l >> r;
        long long int sum = 0;
        
        if(l == 1){
            sum = p_sum[r];
        }
        else{
            sum = p_sum[r] - p_sum[l - 1];
        }
        cout << sum << endl;
    }

    return 0;
}