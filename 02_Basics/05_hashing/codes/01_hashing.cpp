#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
    // numbers hashing
    vector<int> arr = {2, 3, 4, 6, 2, 5, 2, 4, 5, 2, 3};
    vector<int> hash(20, 0);

    for (int i = 0; i < arr.size(); i++)
        hash[arr[i]]++;

    for (int i = 0; i < arr.size(); i++)
        cout << i << " appeared : " << hash[i] << endl;

    return 0;
}