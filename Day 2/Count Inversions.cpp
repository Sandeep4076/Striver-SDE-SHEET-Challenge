#include <bits/stdc++.h>
using namespace std;
long long getInversions(long long *arr, int n){
    // Write your code here.
    long long res=0;
    int j=0;
    for(int i=0; i<n-1; i++){
        j=i+1;
        while(j<n){
            if(arr[j]<arr[i]){
                res++;
            }
            j++;
        }
    }
    return res;
}