#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
   int n=arr.size();
   vector<vector<int>>vt;
   unordered_map<int,int>mp;
   for(int i=0; i<n; i++){
       int res=s-arr[i];
       if(mp.find(res)!=mp.end()){
          int x=mp[res];
          vector<int>v;
          while(x--){
           v.push_back(min(arr[i],s-arr[i]));     
           v.push_back(max(arr[i],s-arr[i]));
            vt.push_back(v);
          }
         
       }
        mp[arr[i]]++;
     
   }
   sort(vt.begin(),vt.end());
    return vt;
}