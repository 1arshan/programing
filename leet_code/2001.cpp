class Solution {
public:
    long long ret=0;
    map<int,int>mp;
   
    // static cmp()
    
    long long interchangeableRectangles(vector<vector<int>>& rec) {
        int rem=0,div=0;
        vector<vector<int>>v(rec.size,vector<int>(2,0));
        for(int i=0;i<rec.size();i++)
        {
            rem=rec[i][1]%rec[i][0];
            div=rec[i][1]/rec[i][0];
            v[i][0]=rem;
            v[i][1]=div;
        }
        sort(v.begin(),v.end(),cmp);
        
        int p1=0,i;
        for(i=1;i<rec.size();i++)
        {
            if(rec[i][0]==rec[p1][0])
            {
                if(rec[i][1]==rec[p1][1])
                {
                   continue; 
                }
                else
                {
                    if(i-p1>1)
                        mp.insert({p1,i-p1});
                    p1=i;
                }
            }
            else
            {
                if(i-p1>1)
                    mp.insert({p1,i-p1});
                p1=i;
            }
        }
        if(i-p1>1)
            mp.insert({p1,i-p1});
        
        for(auto x:mp)
        {
            ret+=(x.second*(x.second-1))/2;
            // cout<<x.first<<" "<<x.second<<endl;
        }
        
        

        return ret;
    }
};