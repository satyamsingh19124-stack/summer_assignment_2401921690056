#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
double max(double a,double b){
if(a>b)
return a;
return b;
}
    double findMaxAverage(vector<int>& nums, int k) {
        int i=0;
        int j=k-1;
        int sum=0;
        double mx=INT_MIN;
        for(int l=i;l<=j;l++)
        sum+=nums[l];
        
        while(j<nums.size()){
            mx=max(mx,(double)sum/k);
            sum-=nums[i];
            i++;
            if(j<nums.size()-1){
                 j++;
                sum+=nums[j];
            }
            else
            break;
        }
        return mx;
    }
};