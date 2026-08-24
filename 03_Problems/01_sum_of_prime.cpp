// #include <bits/stdc++.h>

#include <iostream>
// #include <vector>
// #include <unordered_map>
// #include <algorithm>

// sum of prime numbers that add up to a given number. For example, 28 can be expressed as the sum of two prime numbers: 5 and 23 (5 + 23 = 28). Another example is 10, which can be expressed as the sum of two prime numbers: 3 and 7 (3 + 7 = 10).

using namespace std;

bool isPrime(int a)
{
    if (a <= 1)
        return false;
    for (int i{2}; i < a; i++)
    {
        if (a % i == 0)
            return false;
    }
    return true;
}

int main()
{

    int num = 28;

    for (int i = 2; i <= num; i++)
    {
        if (isPrime(i) && isPrime(num - i))
        {
            if ((i + (num - i)) == num){
                cout << "found" << endl;
                cout<<i<<" "<<num-i<<endl;
                break;
            }
        }
    }

    return 0;
}