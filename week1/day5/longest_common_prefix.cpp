#include<bits/stdc++.h>
using namespace std;
class Trie3{
    public:
    int child[26];
    short count;
    bool isleaf=false;

    Trie3(){
        for(int i=0;i<26;i++)
        child[i]=-1;
        count=0;
    }

    void insert(string&word,vector<Trie3>&t){
        int curr=0;

        for(int i=0;i<word.size();i++){
            if(t[curr].child[word[i]-'a']==-1)
            {t[curr].child[word[i]-'a']=t.size();
            t.push_back(Trie3());}
            curr=t[curr].child[word[i]-'a'];
            t[curr].count++;
        }
        t[curr].isleaf=true;
    }

    // void erase(string&word,vector<Trie3>&t){
    //     int curr=0;

    //     for(int i=0;i<word.size();i++){
    //         curr=t[curr].child[word[i]-'a'];
    //         t[curr].count--;
    //     }
    // }

    // bool isword(string&word,vector<Trie3>&t){
    //     int curr=0;
    //     for(int i=0;i<word.size();i++){
    //         if(t[curr].child[word[i]-'a']==-1)
    //         return false;
    //         else
    //         curr=t[curr].child[word[i]-'a'];
    //     }
    //     return t[curr].isleaf;
    // }

    // bool isprefix(string word,vector<Trie3>&t){
    //     int curr=0;
    //     for(int i=0;i<word.size();i++){
    //         if(t[curr].child[word[i]-'a']==-1)
    //         return false;
    //         else
    //         curr=t[curr].child[word[i]-'a'];
    //     }
    //     return true;
    // }

    string lcp(vector<Trie3>&t,string&s,int n){
        string ans="";
        int curr=0;
        for(int i=0;i<s.size();i++){
            curr=t[curr].child[s[i]-'a'];
            if(t[curr].count==n)
            ans.push_back(s[i]);
            else
            break;
        }
        return ans;
    }

};

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        vector<Trie3>t;
    t.push_back(Trie3());
    for(int i=0;i<strs.size();i++){
        t[0].insert(strs[i],t);
    }
    return t[0].lcp(t,strs[0],strs.size());
    }
};