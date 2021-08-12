#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    
    int recdp(vector<vector<int>>&v,string &a,string &b,int n1,int n2)
    {
        if(n1==0||n2==0)
            return 0;
        if(v[n1-1][n2-1]!=-1)
            return v[n1-1][n2-1];
        if(a[n1-1]==b[n2-1])
        {
            return v[n1-1][n2-1]= max(1+recdp(v,a,b,n1-1,n2-1), recdp(v,a,b,n1-1,n2));
        }
        else
        {
            return v[n1-1][n2-1]= max(recdp(v,a,b,n1-1,n2), recdp(v,a,b,n1,n2-1)) ;
        }
    }
    
    int minDistance(string word1, string word2) {
        vector<vector<int>>v(word1.size(),vector<int>(word2.size(),-1));
        recdp(v,word1,word2,word1.size(),word2.size()); 
        
        return word1.size()+word2.size() -2* v[word1.size()-1][word2.size()-1] ;
    }
};