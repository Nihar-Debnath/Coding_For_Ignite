// #include <bits/stdc++.h>

#include <iostream>
// #include <vector>
#include <unordered_map>
// #include <string>
// #include <math.h>
// #include <algorithm>

using namespace std;

int main(){
    string s = "hello";
    unordered_map<char,int> freq;

    for (int  i = 0; i < s.size(); i++)
    {
        freq[s[i]]++;
    }

    for (auto x : freq)
    {
        cout<<x.first<<" : "<<x.second<<endl;
    }
    
    
    
    
    return 0;
}