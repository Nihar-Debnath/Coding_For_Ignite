// #include <bits/stdc++.h>

#include <iostream>
// #include <vector>
// #include <unordered_map>
// #include <algorithm>
#include <string>

using namespace std;

void usingLoop(string s)
{
    for (int i = 0; i < (s.size() / 2); i++)
    {
        swap(s[i], s[s.size() - i - 1]);
    }
    cout << s;
}

void usingRec(string& s, int l, int r)
{
    if (l >= r)
        return;
    else
        swap(s[l], s[r-1]);

    usingRec(s, l + 1, r - 1);
}

int main()
{

    string s = "hello";

    // usingLoop(s);
    usingRec(s, 0, s.size());
    cout<<s;

    return 0;
}