#include <bits/stdc++.h>
using namespace std;
int maximumProfit(vector<int> &p){
    // Write your code here.
     int maxi=-1;
     int n=p.size();
     int res=1e9;
     for(int i=0; i<n; i++){
        if(p[i]<res){
            res=p[i];
        }
        if(p[i]-res>maxi){
            maxi=p[i]-res;
        }
     }
     return maxi;
}