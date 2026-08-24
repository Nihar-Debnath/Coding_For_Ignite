// #include <bits/stdc++.h>

#include <iostream>
// #include <vector>
// #include <unordered_map>
// #include <algorithm>
#include <math.h>

using namespace std;

int reverseNum(int num)
{
    int reverse{};

    while (num > 0)
    {
        reverse *= 10;
        int temp = num % 10;
        reverse += temp;
        num /= 10;
    }
    return reverse;
}

int main()
{

    int num = 123490;

    if (num % 10 == 0)
        cout << "0" << reverseNum(num);
    else
        cout << reverseNum(num);

    return 0;
}