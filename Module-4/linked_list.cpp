// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Node
{
public:
    int val;
    Node *next; // next node er address indicate kore. so type will be Node*
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

int main()
{
    // Node a, b, c;
    // a.val = 10;
    // b.val = 20;
    // c.val = 30;

    Node a(10), b(20), c(30);
    a.next = &b;
    b.next = &c;
    // c.next = NULL;

    // cout << a.val << " " << b.val << " " << c.val << endl;
    // cout << a.val << " " << a.next->val << " " << a.next->next->val << endl;
    cout << a.val << endl;
    // cout << (*a.next).val << endl;
    // cout << (*b.next).val << endl;
    // cout << (*(*a.next).next).val << endl;
    cout << a.next->val << endl;
    cout << a.next->next->val << endl;

    return 0;
}