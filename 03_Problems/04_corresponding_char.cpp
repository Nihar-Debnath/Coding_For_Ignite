// #include <bits/stdc++.h>

#include <iostream>
// #include <vector>
// #include <unordered_map>
// #include <algorithm>
using namespace std;
#include<string>

int main(){
    
    string s1 = "12345";
    string s2 = "10101";

    string newS="";

    for(int i=0;i<5;i++){
        if(s2[i] == '1'){
            newS.push_back(s1[i]); 
            // or you can so this also
            // newS+=s1[i];
        }
    }

    cout<<newS;
    
    
    return 0;
}