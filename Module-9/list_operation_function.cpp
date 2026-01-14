#include <bits/stdc++.h>
using namespace std;

int main()
{

    list<int> l = {20, 30, 10, 50, 30, 60, 10, 70};

    // l.remove(10); // removes all occurrences of 10

    // l.sort(); // sorts the list in ascending order
    // l.sort(greater<int>()); // sorts the list in descending order

    // l.sort(); // sorts the list in ascending order
    // l.unique(); // removes consecutive duplicate elements, sorted thakle unique kore.

    l.reverse();

    for (auto val : l)
    {
        cout << val << " ";
    }

    return 0;
}