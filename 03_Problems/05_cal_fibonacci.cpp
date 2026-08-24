// #include <bits/stdc++.h>

#include <iostream>
#include <vector>
// #include <unordered_map>
// #include <algorithm>

using namespace std;

void usingLoop()
{
    int num = 89;

    vector<int> seq = {0, 1};

    for (int i = 2; i < num; i++)
    {
        if (seq[i - 2] + seq[i - 1] <= num)
        {
            seq.push_back(seq[i - 2] + seq[i - 1]);
        }
        else
        {
            break;
        }
    }

    for (int i = 0; i < seq.size(); i++)
    {
        cout << seq[i] << " ";
    }
}

void usingRec(vector<int> &seq, int num)
{
    int n = seq.size();
    int next = seq[n - 1] + seq[n - 2];
    if (next > num)
        return;
    else
        seq.push_back(next);

    usingRec(seq, num);
}

int main()
{

    // usingLoop();

    vector<int> seq = {0, 1};
    int num = 100;
    usingRec(seq, num);

    for (int i = 0; i < seq.size(); i++)
    {
        cout << seq[i] << " ";
    }

    return 0;
}