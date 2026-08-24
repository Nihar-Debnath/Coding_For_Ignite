// #include <bits/stdc++.h>

#include <iostream>
// #include <vector>
// #include <unordered_map>
// #include <algorithm>

using namespace std;

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7};

    int n = sizeof(arr) / sizeof(arr[0]);
    int evenSum{}, oddSum{};
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            evenSum += arr[i];
        else
            oddSum += arr[i];
    }

    cout << evenSum << " " << oddSum;

    return 0;
}