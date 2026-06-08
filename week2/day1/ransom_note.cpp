#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int>f(26,0);
        for(int i=0;i<magazine.size();i++){
            f[magazine[i]-'a']++;
        }
        for(int i=0;i<ransomNote.size();i++){
            if(f[ransomNote[i]-'a']==0)
            return false;
            else
            f[ransomNote[i]-'a']--;
        }
        return true;
    }
};