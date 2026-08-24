// #include <bits/stdc++.h>

#include <iostream>
// #include <vector>
// #include <unordered_map>
// #include <algorithm>
#include <math.h>

using namespace std;

bool arm(int num)
{
    int numCopy = num;
    int count{};

    while (numCopy > 0)
    {
        count++;
        numCopy /= 10;
    }

    numCopy = num;
    int sum{};
    while (numCopy > 0)
    {
        int temp = numCopy % 10;
        sum += pow(temp, count);
        numCopy /= 10;
    }

    if (sum == num)
        return true;

    return false;
}

int main()
{

    int num = 10;
    cout << arm(num);

    return 0;
}



// 153
// armstrong number is a number that is equal to the sum of its own digits raised to the power of the number of digits. For example, 153 is an Armstrong number because 1^3 + 5^3 + 3^3 = 153.
// 1^3 + 5^3 + 3^3 = 153