// perfect number is a number which is equal to the sum of its proper divisors or factors. For example, 6 is a perfect number because its proper divisors are 1, 2, and 3, and their sum is 6 (1 + 2 + 3 = 6). Another example is 28, whose proper divisors are 1, 2, 4, 7, and 14, and their sum is also 28 (1 + 2 + 4 + 7 + 14 = 28).

// #include <bits/stdc++.h>

#include <iostream>
#include <vector>
// #include <unordered_map>
// #include <algorithm>
#include <math.h>

using namespace std;

int main()
{

    int num = 28;

    int sum{};
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            cout << i << " ";

            sum += i;
        };
    }

    if (sum == num)
        cout << "perfect";
    else
        cout << "not perfect";

    return 0;
}