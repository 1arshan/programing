#include<bits/stdc++.h>
using namespace std;

class RodCut
{
    public:
    vector<int>prev{0};
    vector<int>curr{0};
    vector<int>nums{0,0,0};

    int initialize(int n, int x, int y, int z)
    {
        //prev.resize(n+1);
        curr.resize(n+1);
        for (auto x:curr)
        {
            x=0;
        }
        curr[0]=1;

        nums[0]=x;
        nums[1]=y;
        nums[2]=z;
        sort(nums.begin(),nums.end());
        //for(auto x:nums)
          //  cout<<x<<endl;

        return 0;
    }

    int maximizeTheCuts(int n, int x, int y, int z)
    {   
        initialize(n,x,y,z);
        //int temp=0;
        for (auto it:nums)
        {
            for (int i =0;i<=n;i++)
            {
                if (it<=i)
                {
                    if (curr[i-it]>=1)
                    {
                        if (curr[i] < curr[i-it]+1)
                        {    curr[i]=curr[i-it]+1;
                            if (curr[i]==2)
                            {
                                cout<<endl<<"i: "<<i<<" curr[i-it]: "<<curr[i-it]<<" it: "<<it<<endl;
                            }
                        }
                    }
                    /*if (i==n && curr[i]>=1)
                    {   
                        //for (auto y:curr)
                        //{
                          //  cout<<y<<" ";
                        //}
                        //cout<<endl;
                        //cout<<curr[i]<<endl;
                        return curr[i]-1;
                    }*/
                    
                }
            }
            /*for (auto y:curr)
            {
                cout<<y<<" ";
            }
            cout<<endl;
            cout<<curr[n]<<endl;
            */
        }
        return curr[n]-1;
    }
};


int main()
{
    int n=490,x=4,y=49,z=50;
    RodCut t;
    cout<<t.maximizeTheCuts(n,x,y,z);
}