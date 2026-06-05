#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1;
        int mx=0;
        int area;
        while(i<j){
            area=min(height[i],height[j])*(j-i);
            mx=max(mx,area);
            if(height[i]<height[j])
            i++;
            else
            j--;
        }
        return mx;
    }
};