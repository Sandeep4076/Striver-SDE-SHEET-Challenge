#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
     unordered_set<int>st;
     for(auto it:arr){
         st.insert(it);
     }
     int maxi=0;
     
     for(auto it:arr){
        
         if(!st.count(it-1)){
             int ce=it;
             int curr=1;

             while (st.count(ce + 1)) {
               ce++;
               curr++;
             }
             maxi = max(curr, maxi);
         }
     }
     return maxi;
}