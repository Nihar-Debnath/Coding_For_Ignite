#include <iostream>
#include <unordered_map>
#include <string>
#include<vector>

using namespace std;

void moveZeros(vector<int> &arr)
{
    int pos{};

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != 0)
        {
            arr[pos] = arr[i];
            pos++;
        }
    }

    while (pos < arr.size())
    {
        arr[pos] = 0;
        pos++;
    }
}

int main()
{
    vector<int> arr = {0, 1, 3, 4, 0, 9};

    moveZeros(arr);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}