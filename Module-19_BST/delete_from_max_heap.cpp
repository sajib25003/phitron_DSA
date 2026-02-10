#include <bits/stdc++.h>
using namespace std;
void insert_heap(vector<int> &v, int val)
{
    v.push_back(val);

    int cur_idx = v.size() - 1;
    while (cur_idx != 0)
    {
        int par_idx = (cur_idx - 1) / 2;
        if (v[par_idx] < v[cur_idx])
        {
            swap(v[par_idx], v[cur_idx]);
        }
        else
        {
            break;
        }
        cur_idx = par_idx;
    }
}

void print_heap(vector<int> v)
{
    for (int x : v)
    {
        cout << x << " ";
    }
}

void delete_heap(vector<int> &v)
{
    cout << endl
         << v[0] << " Deleted => ";
    v[0] = v.back();
    // cout << v[0] << endl;
    v.pop_back();
    int cur_idx = 0;
    while (true)
    {
        int l_idx = 2 * cur_idx + 1;
        int r_idx = 2 * cur_idx + 2;
        int l_val = INT_MIN, r_val = INT_MIN;
        if (l_idx < v.size())
        {
            l_val = v[l_idx];
        }

        if (r_idx < v.size())
        {
            r_val = v[r_idx];
        }
        if (l_val >= r_val && l_val > v[cur_idx])
        {
            swap(v[l_idx], v[cur_idx]);
            cur_idx = l_idx;
        }
        else if (r_val > l_val && r_val > v[cur_idx])
        {
            swap(v[r_idx], v[cur_idx]);
            cur_idx = r_idx;
        }
        else
        {
            break;
        }
    }
}

int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        insert_heap(v, val);
    }
    print_heap(v);
    delete_heap(v);
    print_heap(v);
    delete_heap(v);
    print_heap(v);
    delete_heap(v);
    print_heap(v);

    return 0;
}