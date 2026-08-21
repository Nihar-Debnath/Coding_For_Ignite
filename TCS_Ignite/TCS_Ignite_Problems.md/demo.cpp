// #include <bits/stdc++.h>

#include <iostream>
// #include <vector>
// #include <unordered_map>
// #include <algorithm>
using namespace std;

int solve(int a, int b, int c, char prev)
{
    if (a == 0 && b == 0 && c == 0)
        return 1;
    int ans{};

    if (a > 0 && prev != 'G')
    {
        ans += solve(a-1, b, c, 'G');
    }

    if (b > 0 && prev != 'Y')
    {
        ans += solve(a, b-1, c, 'Y');
    }

    if (c > 0 && prev != 'R')
    {
        ans += solve(a, b, c-1, 'R');
    }

    return ans;
}

int main()
{

    int a, b, c;
    cin >> a >> b >> c;

    cout << solve(a, b, c, 'S');

    return 0;
}