#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/
using namespace std;
vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
    int n=intervals.size();
    sort(intervals.begin(),intervals.end());
    vector<vector<int>>vt;
    int i=0;
    int x=0;
    int y=0;
    while(i<n){
        x=intervals[i][0];
        y=intervals[i][1];
        while(i+1<n && y>=intervals[i+1][0]){
            y=max(intervals[i+1][1],y);
            i++;
        }
        vt.push_back({x,y});
        i++;
    }
    return vt;
    
}
