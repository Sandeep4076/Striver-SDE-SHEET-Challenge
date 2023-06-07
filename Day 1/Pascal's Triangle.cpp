#include <bits/stdc++.h>
using namespace std;
vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
  vector<vector<long long int >>vt(n);

   for(int i=0; i<n; i++){
     vt[i].resize(i+1);
      vt[i][0]=1;
      vt[i][i]=1;
     for(int j=1; j<i; j++){
         vt[i][j]=vt[i-1][j-1]+vt[i-1][j];
     }
   }
   return vt;
}
