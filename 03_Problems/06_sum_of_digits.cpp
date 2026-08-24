// #include <bits/stdc++.h>

#include <iostream>
// #include <vector>
// #include <unordered_map>
// #include <algorithm>
using namespace std;

int main(){
    
    int n = 12345;
    int sum{};

    while (n>0){
        sum+=n%10;
        n/=10;
    }
    
    cout<<sum;
    
    return 0;
}