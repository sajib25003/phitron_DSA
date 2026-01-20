#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<string> lst;
    string s;

    while (cin >> s)
    {
        if (s == "end")
            break;
        lst.push_back(s);
    }

    auto current = lst.begin();

    int n;
    cin >> n;

    while (n--)
    {
        string type;
        cin >> type;

        if (type == "visit")
        {
            string address;
            cin >> address;

            bool found = false;
            for (auto it = lst.begin(); it != lst.end(); it++)
            {
                if (*it == address)
                {
                    current = it;
                    cout << *current << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Not Available" << endl;
        }

        else if (type == "next")
        {
            auto temp = current;
            temp++;

            if (temp != lst.end())
            {
                current = temp;
                cout << *current << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }

        else if (type == "prev")
        {
            if (current != lst.begin())
            {
                current--;
                cout << *current << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}
