#include <bits/stdc++.h>
using namespace std;
void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
     set<int>st1;
	 set<int>st2;
	int n=matrix.size();
	int m=matrix[0].size();
	for(int i=0; i<n; i++){
		
		for(int j=0; j<m; j++){
			if(matrix[i][j]==0){
				st1.insert(i);
				st2.insert(j);
			}
		}
		// vt.push_back(vt1);
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
            if(st1.find(i)!=st1.end()  or st2.find(j)!=st2.end()){
				matrix[i][j]=0;
			}
		}
	}
	// for(auto it:matrix){
	// 	cout<<it;
	// }
	// return matrix;

}