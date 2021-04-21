#include<bits/stdc++.h>
using namespace std;

class SubsetSum
{
    public:
    vector<int> prev;
    vector<int> curr;
    vector<int> v;
    int sum;
    int count =0;


    SubsetSum(vector<int>&vec,int s)
    {
        prev.resize(s+1);
        for (auto x:prev)
        {
            x=0;
            //cout<<x<<endl;
        }
        curr.resize(s+1); 
        v=vec;
        //for (auto x:v)
        //{
          //  cout<<x<<endl;
        //}
        sum=s;
    }

    int solve()
    {
        for (auto x:v)
        {   cout<<x<<endl;
            for (int i=0;i<=sum;i++)
            {
                if (x <=i)
                {
                    curr[i]=x+prev[i-x];
                    //cout<<curr[i]<<endl;
                    if (curr[i]==sum)
                        {count++;
                        cout<<curr[i]<<endl;
                        }
                        //return 1;
                    //else if (curr[i] >sum)
                    //{
                      //  return 0;
                    //}
                }
                else
                {
                    curr[i]=prev[i];
                }

            }
            prev=curr;
            for (auto x:prev)
        {
            cout<<x<<" ";
        }
        cout<<endl;
        }
        return 0;
    }
  
};

int main()
{
    //vector<int>v{2,4,3,6,8,23,9,4,5,2,6,13,5,11,14,15};
    vector<int>v{1,10,3,4,5,7,8,9,13};
    sort(v.begin(),v.end());
    int sum=11;
    SubsetSum t(v,sum);
    t.solve();
    cout<<t.count<<endl;
    
}