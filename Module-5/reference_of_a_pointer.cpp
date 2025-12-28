// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void fun(int *&p)
{
    int y = 20;
    p = &y;
    // p = NULL;
    cout << "Inside fun: " << p << endl;
}

int main()
{

    int x = 10;
    int *p = &x;
    fun(p);
    cout << "Inside main: " << p << endl;

    return 0;
}