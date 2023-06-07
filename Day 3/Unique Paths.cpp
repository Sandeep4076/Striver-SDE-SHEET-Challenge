#include <bits/stdc++.h>
using namespace std;
int p(int i,int j, int m,int n, vector<vector<int>>&vt){
	if(i==m-1 and j==n-1){
		return 1;
	}
	if(i<0 or j<0 or i>=m or j>=n){
		return 0;
	}
	if(vt[i][j]!=-1){
		return vt[i][j];
	}
	int l=p(i+1,j,m,n,vt);
	int d=p(i,j+1,m,n,vt);
	return vt[i][j]=l+d;
}
int uniquePaths(int m, int n) {
	// Write your code here.
	vector<vector<int>>vt(m,vector<int>(n,-1));
	return p(0,0,m,n,vt);
}