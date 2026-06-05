#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,bool>visit;
        for(int i=0;i<nums.size();i++){
            cout<<visit[nums[i]]<<endl;
            if(visit[nums[i]]==1)
            return true;
            else
            visit[nums[i]]=1;
        }
        return false;
    }
};