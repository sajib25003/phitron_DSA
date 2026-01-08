#include <bits/stdc++.h>
using namespace std;

int main()
{

    list<int> l = {1,   2, 3, 4,   5};
    // list<int> l2;
    // l2 = l;
    // l.assign(l.begin(), l.end());
    // l.push_back(6);
    // l.push_front(0);
    // l.pop_back();
    // l.pop_front();
    // l.pop_front();

    // auto item = *next(l.begin(), 2);
    // auto item = next(l.begin(), 2);
    // cout << "Item at index 2: " << *item << endl;

    // list<int>newList = {100, 200, 300};
    // l.insert(next(l.begin(), 2), 10);
    // l.insert(next(l.begin(), 2), newList.begin(), newList.end());

    // l.erase(next(l.begin(), 4));
    // l.erase(next(l.begin(), 1), next(l.begin(), 3)); 

    for (auto val : l)
    {
        cout << val << " ";
    }

    return 0;
}