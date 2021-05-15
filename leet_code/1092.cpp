
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string lcs=""; 

    vector<vector<int>>initilize(string &str1, string &str2)
    {
        vector<int> row(str1.length()+1,0);
        vector<vector<int>>vect(str2.length()+1,row);
        return vect;
    }

    void longestCommonSubsequence(vector<vector<int>>&vect,string &str1, string &str2)
    {
        int j,i;
        //memorizing table start
        for(j=1;j<=str2.length();j++)
        {
            for(i=1;i<=str1.length();i++)
            {
                if(str2[j-1]==str1[i-1])
                {
                    vect[j][i]=1+vect[j-1][i-1];
                }
                else
                {
                    vect[j][i]=vect[j][i-1]>vect[j-1][i]?vect[j][i-1]:vect[j-1][i];
                }
            }
        }//memorizing table end
        j--;i--;
        int temp=0,prev_j=j,prev_i=i;
        while (vect[j][i]!=0)
        {
            temp=vect[j][i];
            if(vect[j][i-1]>vect[j-1][i])
            {
                //prev_i=i;
                i--;
            } 
            else if (vect[j][i-1]==vect[j-1][i])
            {
                j--;
            }
            else
            {
                //prev_j=j;
                //cout<<"prev_j: "<<prev_j<<endl;
                j--;
            }
            if(temp!=vect[j][i])
                {   i--; //testing
                    //cout<<"j: "<<j<<" i: "<<i<<" prev_i: "<<prev_i<<" prev_j: "<<prev_j<<endl;
                    while (prev_i>i+1)
                    {
                        //cout<<"i: "<<str1[prev_i-1]<<endl;
                        lcs=str1[prev_i-1]+lcs;
                        prev_i--;
                    }
                    
                    while (prev_j>j+1)
                    {
                        //cout<<"j: "<<str2[prev_j-1]<<endl;
                        lcs=str2[prev_j-1]+lcs;
                        prev_j--;
                    }
                    lcs =str2[j]+lcs;
                    //cout<<"lcs: "<<lcs<<endl;
                    prev_i=i;
                    prev_j=j;
                }
        }
        //cout<<"j: "<<j<<" i: "<<i<<" prev_i: "<<prev_i<<" prev_j: "<<prev_j<<endl;
        //condition when v[i][j]=0 but item still left from beginning
        j--;i--;
        while (j>=0)
        {
            lcs=str2[j]+lcs;
            j--;
        }

        while (i>=0)
        {
            lcs=str1[i]+lcs;
            i--;
        }
        
        
    }

    string shortestCommonSupersequence(string &str1, string &str2) {
        vector<vector<int>>vect=initilize(str1,str2);
        longestCommonSubsequence(vect,str1,str2);
        /*for(auto x:vect)
        {
            for(auto y:x)
            {
                cout<<y<<" ";
            }cout<<endl;
        }*/

        

        return lcs;
    }
};

int main()
{
	
    string str1 = "gxtxajkdjaskdklnkkdkakldjadldkdjkkasncdkasyb";
    //string str1 = "gxtxaj";
    string str2 = "aggdkljaskldcmncsklaejejtkjkcaskljrfmasklrjtabaa";
    //string str2 = "agg";
    Solution t;
    cout<<t.shortestCommonSupersequence(str1,str2);
	return 0;
}
