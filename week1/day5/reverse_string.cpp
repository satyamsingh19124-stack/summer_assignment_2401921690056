#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void reverseString(vector<char>& s) {
        int rp=s.size()-1;
        int lp=0;
        char temp;
        while(lp<rp){
            temp=s[rp];
            s[rp]=s[lp];
            s[lp]=temp;
            lp++;
            rp--;
        }
    }
};