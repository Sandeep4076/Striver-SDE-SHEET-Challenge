#include <bits/stdc++.h>
using namespace std;
int uniqueSubstrings(string input)
{
    // Write your code here
    //  map<char,int>mp;
    map<char, int> mp;
    int maxi = 0;
    int c = 0;
    for (int i = 0; i < input.length(); i++)
    {
        mp[input[i]]++;
        while (mp[input[i]] > 1)
        {

            mp[input[c]]--;
            c++;
        }
        maxi = max(maxi, i - c + 1);
    }
    return maxi;
}