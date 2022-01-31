class Solution {
public:
    int m,n;
    int m_area=0;
    void cal_h(vector<vector<char>>& matrix,vector<vector<int>>&v,int i)
    {
        for(int j=0;j<n;j++)
        {
            if(matrix[i][j]=='1')
            {
                if(i==m-1)
                {
                    v[i][j]=1;
                    continue;
                }
                v[i][j]=1+v[i+1][j];
            }
        }
    }
    
    void nsr(vector<int>&h,stack<int>&st,vector<vector<int>>&v)
    { 
        for(int i=0;i<n;i++)
        {
            while(!st.empty())
            {
                if(h[st.top()]<h[i])
                {
                    v[i][0]=st.top();
                    break;
                }
//                 else if(h[st.top()]==h[i])
//                 {
                    
//                 }
                else
                    st.pop();
            }
            st.push(i);
        }
        // cout<<"index printing"<<endl;
        // for(auto x:v)
        //     cout<<x[0]<<" ";
        // cout<<endl;
        while(!st.empty())
            st.pop();
    }
    
    void nsl(vector<int>&h,stack<int>&st,vector<vector<int>>&v)
    { 
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty())
            {
                if(h[st.top()]<h[i])
                {
                    v[i][1]=h[i]*(st.top()-v[i][0]-1);
                    break;
                }
                else
                    st.pop();
            }
            if(v[i][1]==-1)
                v[i][1]=h[i]*(n-v[i][0]-1);
            m_area=max(m_area,v[i][1]);
            st.push(i);
        }
        // st.clear();
    }
    
    void max_area(vector<vector<int>>v,int i)
    {
        stack<int>st;
        vector<vector<int>>index(n,vector<int>(2,-1));
        nsr(v[i],st,index);
        nsl(v[i],st,index);
        // for(auto x:index)
        //     cout<<x[1]<<" ";
        // cout<<endl;
        
    }
    
    int maximalRectangle(vector<vector<char>>& matrix) {
        m=matrix.size();
        n=matrix[0].size();
        int i;
        vector<vector<int>>v(m,vector<int>(n,0));
        for(i=m-1;i>=0;i--)
        {
            cal_h(matrix,v,i);
            max_area(v,i);
            // break;
        }
        // for(auto x:v)
        // {
        //     for(auto y:x)
        //         cout<<y<<" ";
        //     cout<<endl;
        // }
        return m_area;
    }
};