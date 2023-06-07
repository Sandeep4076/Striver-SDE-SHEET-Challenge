#include <bits/stdc++.h>
using namespace std;
bool searchMatrix(vector<vector<int>>& mat, int target) {
    int n=mat.size();
    int m=mat[0].size();
      int low=0;
      int high=(n*m)-1;
      while(low<=high){
          int mid=(low+high)/2;
          int x=mat[mid/m][mid%m];
          if(x==target){
              return true;
          }
          else if(x<target){
              low=mid+1;
          }
          else{
              high=mid-1;
          }
      }
      return false;

}