#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i,j;
        i=j=0;
        while(j<nums.size()){
            if(nums[j]>nums[i]){
                i++;
                nums[i]=nums[j];
            }
            else{
                j++;
            }
        }
        return i+1;
    }
};