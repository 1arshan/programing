class Solution {
public:
    
    int recdp(vector<vector<vector<int>>>&v,int mod,int i,int j,int k,int t)
    {
        // int temp=0;
        if(i<0 ||j<0 ||k<0)
            return 0;
        if(v[i][j][k]!=-1)
        {
            // cout<<"return"<<" i: "<<i<<"; j: "<<j<<"; k: "<<k<<endl;
            return v[i][j][k];
        }
        if(mod==0)
        {
            if(j==0 &&k ==0)
                return v[i][j][k]=recdp(v,3,i-1,j,k-1,t);
            v[i][j][k]=max(recdp(v,1,i,j-1,k,t+1),recdp(v,2,i,j,k-1,t+1));
        }
        else if(mod==1)
        {
            if(i==0 &&j ==0)
                return v[i][j][k]=recdp(v,3,i,j,k-1,t+1);
            v[i][j][k]=max(recdp(v,1,i-1,j,k,t+1),recdp(v,2,i,j-1,k,t+1));
        }
        else if(mod==2)
        {
            if(i==0 &&k ==0)
            {
                // cout<<"hello"<<" i: "<<i<<"; j: "<<j<<"; k: "<<k<<endl;
                return v[i][j][k]=recdp(v,3,i,j-1,k,t+1);
            }
            v[i][j][k]=max(recdp(v,2,i-1,j,k,t+1),recdp(v,1,i,j,k-1,t+1));
        }
        else
        {
            if(t%2==0)
            {
                cout<<"t: "<<t<<endl;
                v[i][j][k]=1;
                // cout<<"i: "<<i<<"; j: "<<j<<"; k: "<<k<<endl;
            }
            else
                v[i][j][k]=0;
        }
        return v[i][j][k];
        // return 1;
    }
    
    bool stoneGameIX(vector<int>& st) {
        vector<int>temp(3,1);
        for(auto x:st)
        {
            if(x%3==0)
                temp[0]++;
            else if(x%3==1)
                temp[1]++;
            else
                temp[2]++;
        }
        cout<<"temp[0]: "<<temp[0]<<"; temp[1]: "<<temp[1]<<"; temp[2]: "<<temp[2]<<endl;
        vector<vector<vector<int>>>v   (temp[0], vector<vector<int>>(temp[1],vector<int>(temp[2],-1)));
        
        // for(int i=0;i<1;i++)
        // {
        //     for(int j=0;j<1;j++)
        //     {
        //         for(int k=0;k<1;k++)
        //             v[i][j][k]=1;
        //     }
        // }
        
        // vector<vector<vector<int>>> vector_3d(z, vector<vector<int>>(y,      vector<int>(x, value)));
        // return recdp(v,0,temp[0]-1,temp[1]-1,temp[2]-1,0);
        return 0; //st empty
        
    }
};