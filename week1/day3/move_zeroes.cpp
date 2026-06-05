#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=0,z=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0)
            {
                nums[n]=nums[i];
                n++;
            }
            else
            z++;
        }
        for(int i=1;i<=z;i++){
            nums[n]=0;
            n++;
        }
    }
};