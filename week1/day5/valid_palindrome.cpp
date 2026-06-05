#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
bool ispalin(string&a){
    int i=0;
    int j=a.size()-1;
    while(i<j){
        if(a[i]!=a[j])
        return false;
        i++;
        j--;
    }
    return true;
}
    bool isPalindrome(string s) {
        string s1="";
        for(int i=0;i<s.size();i++){
            if(s[i]>='a' and s[i]<='z')
            s1.push_back(s[i]);
            else if(s[i]>='A' and s[i]<='Z')
            s1.push_back(s[i]-'A'+'a');
            else if(s[i]>='0' and s[i]<='9')
            s1.push_back(s[i]);
            else
            continue;
        }
        return ispalin(s1);
    }
};