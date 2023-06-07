#include <bits/stdc++.h>
using namespace std;
int findMajorityElement(int arr[], int n) {
	// Write your code here.
	map<int,int>mp;
	for(int i=0; i<n; i++){
		mp[arr[i]]++;
	}
	int res=-1;
	for(auto it:mp){
		if(it.second>n/2){
			res=it.first;
		}
	}
	return res;
}