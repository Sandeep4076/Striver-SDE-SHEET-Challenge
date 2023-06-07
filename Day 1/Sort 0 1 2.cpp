#include <bits/stdc++.h>
using namespace std;
void sort012(int *arr, int n) {
  //   Write your code here
  int i=0;
  int x=0;
  int y=n-1;
  while(i<=y){
     if(arr[i]==0){
        swap(arr[i],arr[x]);
        i++;
        x++;
     }
     else if(arr[i]==1){
        i++;
     }
     else{
        swap(arr[i],arr[y]);
        y--;
     }
  }
}