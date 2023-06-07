#include <bits/stdc++.h>
using namespace std;
vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    vector<int>vt;
    int n=arr.size();
    map<int,int>mp;
    for(auto it:arr){
        mp[it]++;
    }
    for(auto it:mp){
        if(it.second>n/3){
              vt.push_back(it.first);
        }
    }
    return vt;

}