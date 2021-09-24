    
class Solution {
public:
    // set<char>s1;
    map<char,int>s1;
    int op=0;
    int findp(string &s,vector<vector<int>>&v,int i,int j)
    {
        
        set<char>ps;
        // while(i<j)
        for(int t=i+1;t<j;t++)
        {
            ps.insert(s[t]);
            // i++;
        }
        v[i][j]=ps.size();
        if(s1.count(s[j]))
        {
            if(ps.size()>s1[s[j]])
            {
                op=op-s1[s[j]]+ps.size();
                s1[s[j]]=ps.size();
            }
        }
        else
        {
            // s1[s[j]]=ps.size();
            s1.insert({s[j],ps.size()});
            op+=ps.size();
        }
        
        // cout<<"op: "<<op<<"; ps.size(): "<<ps.size()<<"; s[j]: "<<s[j]<<endl;
        return 1;
    }
    
    
    int recdp(string &s,vector<vector<int>>&v,int i,int j)
    {
        if(i>=j)
        {
            return 0;
        }
        
        if(v[i][j]!=-1)
            return 0;
        v[i][j]=0;
//         if(!s1.count(s[i]))
//         {
            
            if(s[i]==s[j])
            {
                // cout<<"p foud"<<endl;
                // s1.insert(s[i]);
                //func call
                findp(s,v,i,j);
                recdp(s,v,i+1,j-1);
                 
            }
            else
            {
                recdp(s,v,i+1,j);
                recdp(s,v,i,j-1);
                recdp(s,v,i+1,j-1);
            }
            return 1;
        // }
//         else if(s1.count(s[i]))
//         {
//             if(s[i]==s[j])
//             {
//                 // cout<<"p foud"<<endl;
//                 // s1.insert(s[i]);
//                 //func call
//                 findp(s,i+1,j);
//                 recdp(s,v,i+1,j-1);
                 
//             }
//             else
//             {
//                 recdp(s,v,i+1,j);
//                 recdp(s,v,i,j-1);
//                 recdp(s,v,i+1,j-1);
//             }
//             return 1;
            
//         }
//         else
//             recdp(s,v,i+1,j);
        return 1;
    }

    int countPalindromicSubsequence(string s) {
        vector<vector<int>>v(s.size(),vector<int>(s.size(),-1));
        recdp(s,v,0,s.size()-1);
        // cout<<op<<endl;
        return op;
    }
};