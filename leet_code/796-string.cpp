#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int c_pos=0;

    int check_common(string &s, string &goal)
    {
        int temp=c_pos;
        for(;temp>0;temp--)
        {
            if(s[0]==goal[temp])
            {
                c_pos=temp;
                return 1;
            }
        }
        return 0;
    }

    int match_string(string &s, string &goal)
    {
        int constant=c_pos,i=0,j=1;
        for(i=1;i<s.size();i++,j++)
        {
            if(constant+j==goal.size())
            {
                constant=0;
                j=0;
            }
            if(s[i]!=goal[constant+j])
            {
                return 0;
            }
            
        }
        return 1;
    }

    bool rotateString(string &s, string &goal) {
        c_pos=s.size()-1; 
        int found=0,temp=c_pos;
        if (s.size()!=goal.size())
            return false;

        if(s.size()==1 ||s.size()==0)
            return true;
        
        for(;temp>0;temp--)
        {
            if(s[0]==goal[temp])
            {
                c_pos=temp;
                // return 1;
                found=match_string(s,goal);
            }
            if(found==1)
                break;
        }
        return found;
    }
};

int main()
{
    string s= "";
    string goal="";
    Solution t;
    cout<<t.rotateString(s,goal);
}