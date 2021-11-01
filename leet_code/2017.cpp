class Solution {
public:
    int pos=0;
    int kante(vector<vector<int>>& grid,int x)
    {
        int i;
        for(i=1;i<grid[x].size();i++)
        {
            grid[x][i]+=grid[x][i-1];
        }
        return 1;
    }
    
    int t2(vector<vector<int>>& g)
    {
        int ma=0,i,temp=0,s=g[0].size();
        if(pos!=0)
            ma=g[1][pos-1];
        
        for(i=1;i<s;i++)
        {
            if(i>pos)
            {
                temp=g[0][i]-g[0][pos];
                // cout<<temp<<endl;
            }
            else
            {
                temp=g[1][pos-1]-g[1][i-1];
            }
            if(ma<temp)
            {
                // pos=i;
                ma=temp;
            }
        }
        return ma;
    }
    
    int t1(vector<vector<int>>& g)
    {
        int ma=0,i,temp=0,s=g[0].size();
        temp=g[0][0]+g[1][s-1];
        ma=temp;
        for(i=1;i<s;i++)
        {
            temp=g[0][i]+g[1][s-1]-g[1][i-1];
            if(ma<temp)
            {
                pos=i;
                ma=temp;
            }
        }
        return 1;
    }
    
    long long gridGame(vector<vector<int>>& grid) {
        kante(grid,0);
        kante(grid,1);
        // for(auto x:grid)
        // {
        //     for(auto y:x)
        //         cout<<y<<" ";
        //     cout<<endl;
        // }
        // int s1=grid[0][grid[0].size()-1];
        // int s2=grid[1][grid[1].size()-1];
        
        t1(grid);
        // cout<<"pos: "<<pos<<endl;
        // return 1;
        return t2(grid);
        
    }
};