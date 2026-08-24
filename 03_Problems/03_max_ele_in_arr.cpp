// #include <bits/stdc++.h>

#include <iostream>
// #include <vector>
// #include <unordered_map>
// #include <algorithm>

using namespace std;

int main()
{

    int arr[] = {1, 91, 3, 4, 5, 6, 7,90, 901};

    int n = sizeof(arr) / sizeof(arr[0]);
    int maxEle{arr[0]};
    for (int i = 1; i < n; i++)
    {
        if(arr[i]>maxEle) maxEle = arr[i];
    }

    cout << maxEle;

    return 0;
}