// #include <bits/stdc++.h>

#include <iostream>
// #include <vector>
// #include <unordered_map>
// #include <algorithm>

using namespace std;

int search(int arr[], int target, int n)
{
    int low{}, high{n-1};

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
            return mid;

        if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 23};
    cout << search(arr, 2, 12);
    return 0;
}