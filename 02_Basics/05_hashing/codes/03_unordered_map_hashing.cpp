#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
    // hashing using unordered_map, for sizing problem
    
    int arr2[] = {2, 1000000, 2, 50000000, 1000000};

    unordered_map<int, int> frecq;

    for (auto i : arr2)
    {
        frecq[i]++;
    }
    for (auto i : frecq)
    {
        std::cout << i.first << " repeated " << i.second << " times." << std::endl;
    }

    return 0;
}