#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int s_len=0,e_len=0,s_bred=0,e_bred=0,pos=0;
    vector<int>re_mat{0};

    int traversal(vector<vector<int>>& matrix)
    {   
        int i=1,j=0;
        switch (i)
        {
        case 1:
            for(j=s_len;j<e_len && pos!=re_mat.size();j++)
            {
                re_mat[pos]=matrix[s_bred][j];
                pos++;
            }
        case 2:
            for(j=s_bred+1;j<e_bred-1 && pos!=re_mat.size();j++)
            {
                re_mat[pos]=matrix[j][e_len-1];
                pos++;
            }
        case 3:
            for(j=e_len-1;j>=s_len && pos!=re_mat.size();j--)
            {
                re_mat[pos]=matrix[e_bred-1][j];
                pos++;
            }
        case 4:
            for(j=e_bred-2;j>s_bred && pos!=re_mat.size();j--)
            {
                re_mat[pos]=matrix[j][s_len];
                pos++;
            }
            break;
        }
        // cout<<"pos: "<<pos<<endl;
        return 1;
    }

    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int bred=0;
        for(auto x:matrix)
        {
            bred++;
        }
        
        e_bred=bred;
        e_len=matrix[0].size();
        // cout<<"bred: "<<bred<<"; e_len: "<<e_len<<endl;
        re_mat.resize(bred*matrix[0].size());
        int temp=0;
        while (true)
        {
            traversal(matrix);
            s_len+=1;
            e_len-=1;
            s_bred+=1;
            e_bred-=1;
            // cout<<"s_len: "<<s_len<<"; e_len: "<<e_len<<"; s_bred: "<<s_bred<<"; e_bred: "<<e_bred<<endl;
            // temp++;
            if(pos>=re_mat.size())
            break;
        }
        
        
        return re_mat;
    }
};

int main()
{
    vector<vector<int>>matrix{{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    Solution t;
    t.spiralOrder(matrix);
    for(auto x:t.re_mat)
    {
        cout<<x<<" ";
    }
}