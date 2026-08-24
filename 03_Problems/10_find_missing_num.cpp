// Find missing number in an array of 1 to n, that means if the array is of size n-1, then find the missing number in the array. For example, if the array is [1, 2, 3, 5], then the missing number is 4.

// #include <bits/stdc++.h>

#include <iostream>
#include <vector>
// #include <unordered_map>
// #include <algorithm>

using namespace std;

int main()
{

    vector<int> arr = {1, 2, 3, 5};

    int n = arr.size() + 1; // because there is one number is missing to that number + array size will be the value of n

    int nSum = (n * (n + 1)) / 2;
    // n*n+1 can never be odd, so we can divide it by 2 without any problem. Because odd * even = even, and even / 2 = integer, so we can divide it by 2 without any problem.

    int arrSum{};
    for (int i = 0; i < arr.size(); i++)
    {
        arrSum += arr[i];
    }

    cout << "Mising: " << nSum - arrSum;

    return 0;
}