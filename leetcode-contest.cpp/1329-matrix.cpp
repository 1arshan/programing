#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int>s{0};

    int matrixSort(vector<vector<int>>& mat)
    {
        int i=0,pos=0,j=0,temp=0;
        for(i=mat[0].size()-2;i>=0;i--)
        {
            //into vector
            while (j+temp<mat.size() && i+temp<mat[0].size())
            {
                s[pos]=mat[j+temp][i+temp];
                temp++;
                pos++;
            }
            sort(s.begin(),s.begin()+temp);
            //from vector into matrix
            while (temp>0)
            {
                pos--;
                temp--;
                mat[j+temp][i+temp]=s[pos];
            } 
        }
        i=0;
        for(j=1;j<mat.size()-1;j++)
        {
            // cout<<"temp: "<<temp<<endl;
            while (j+temp<mat.size() && i+temp<mat[0].size())
            {
                s[pos]=mat[j+temp][i+temp];
                temp++;
                pos++;
            }
            sort(s.begin(),s.begin()+temp);
            while (temp>0)
            {
                pos--;
                temp--;
                mat[j+temp][i+temp]=s[pos];
            } 
        }
        return 1;
    }

    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        s.resize(mat.size());
        matrixSort(mat);
        return mat;
    }
};

int main()
{
    vector<vector<int>>mat{{3,3,1,1},{2,2,1,2},{1,1,1,2}};
    Solution t;
    t.diagonalSort(mat);
    for(auto x:mat)
    {
        for(auto y:x)
        {
            cout<<y<<" ";
        }
        cout<<endl;
    }
}