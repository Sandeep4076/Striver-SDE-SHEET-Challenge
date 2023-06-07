#include <bits/stdc++.h>
using namespace std;
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int n, int m) {
	// Write your code here.
	vector<int>vt;
	int i=0; 
	int j=0;
	while(i<n and j<m){
		if(arr1[i]<arr2[j]){
			vt.push_back(arr1[i]);
			i++;
		}
		else{
			vt.push_back(arr2[j]);
			j++;
		}
	}
	// if(i!=n and j==m){
		while(i<n){
			vt.push_back(arr1[i]);
			i++;
		}

	// }
	// if(j!=m and i==n){
		while(j<m){
			vt.push_back(arr2[j]);
			j++;
		}
	// }
	return vt;
}