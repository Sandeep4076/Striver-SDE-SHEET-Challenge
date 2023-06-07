#include <bits/stdc++.h>
using namespace std;
vector<int> nextPermutation(vector<int> &p, int n)
{
    //  Write your code here.
    int index=-1e9;
    for(int i=n-2; i>=0; i--){
        if(p[i]<p[i+1]){
            index=i;
            break;
        }
    }
    if(index==-1e9){
        reverse(p.begin(),p.end());
        return p;
    }
    for(int i=n-1; i>index; i--){
        if(p[i]>p[index]){
            swap(p[i],p[index]);
            break;
        }
    }
    reverse(p.begin()+index+1,p.end());
    return p;
}