#include <bits/stdc++.h>
using namespace std;

class myQueue
{
public:
    list<int> lst;

    void push(int val)
    {
        lst.push_back(val);
    }

    void pop()
    {
        lst.pop_front(); // remove first value
    }

    int front()
    {
        return lst.front(); // returns first value
    }

    int back()
    {
        return lst.back(); // returns last value
    }

    int size()
    {
        return lst.size(); // returns size
    }

    bool empty()
    {
        return lst.empty(); // checks if empty
    }
};

int main()
{
    myQueue q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    cout << q.front() << " " << q.back() << " " << q.size() << endl;

    return 0;
}