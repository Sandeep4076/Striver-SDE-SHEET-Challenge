#include <bits/stdc++.h>
using namespace std;
pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	int a;
	int b;
	map<int,int>mp;
	for(auto it:arr){
		mp[it]++;
	}
	for(int i=1; i<=n;i++){
		if(mp[i]==0){
			a=i;
		}
		if(mp[i]==2){
			b=i;
		}
	}
	return {a,b};
}
