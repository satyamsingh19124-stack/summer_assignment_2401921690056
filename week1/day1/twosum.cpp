#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans(2);
        int tofind;
        for(int i=0;i<nums.size()-1;i++){
            tofind=target-nums[i];
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]==tofind)
                {
                    ans[0]=i;
                    ans[1]=j;
                    return ans;
                }
            }
        }
        return ans;
    }
};