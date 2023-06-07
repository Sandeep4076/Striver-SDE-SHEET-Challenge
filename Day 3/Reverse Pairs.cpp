#include <bits/stdc++.h>
using namespace std;
int cp(vector<int> &vt, int low, int mid, int high)
{
	int count = 0;
	int j = mid + 1;
	for (int i = low; i <= mid; i++)
	{
		while (j <= high and vt[i] > vt[j] * 2)
		{
			j++;
		}
		count += j - (mid + 1);
	}
	vector<int> t;
	int left = low, right = mid + 1;

	while (left <= mid && right <= high)
	{

		if (vt[left] <= vt[right])
		{
			t.push_back(vt[left++]);
		}
		else
		{
			t.push_back(vt[right++]);
		}
	}

	while (left <= mid)
	{
		t.push_back(vt[left++]);
	}
	while (right <= high)
	{
		t.push_back(vt[right++]);
	}

	for (int i = low; i <= high; i++)
	{
		vt[i] = t[i - low];
	}
	return count;
 }

 int  mergesort(int low,int high, vector<int>&vt){
	 
	 if(low>=high){
		 return 0;
	 }
	 int mid=(low+high)/2;
	 int count=mergesort(low, mid, vt);
	 count+=mergesort(mid+1, high, vt);
	 count+=cp(vt,low,mid,high);
	 return count;
 }
 
int reversePairs(vector<int> &arr, int n){
	// Write your code here.	
	return mergesort(0,n-1,arr);
	
}

