#include<bits/stdc++.h>
using namespace std;

class SubsetSum
{
    public:
    vector<int> prev;
    vector<int> curr;
    vector<int> v;
    int sum=0;
    int half_sum =0;


    SubsetSum(vector<int>&vec)
    {   
        sum_of_vector(vec);
        prev.resize(half_sum+1);
        for (auto x:prev)
            x=0;
        curr.resize(half_sum+1);
        v =vec;
    }

    int sum_of_vector(vector<int>&v)
    {
        for (auto x:v)
        {
            sum+=x;
        }
        half_sum=sum/2;
        cout<<half_sum<<endl;
        return 1;
    }

    int solve()
    {
        for (auto x:v)
        {   
            for (int i=0;i<=half_sum;i++)
            {
                if (x <=i)
                {
                    if (x+prev[i-x]>prev[i])
                        curr[i]=x+prev[i-x];
                    else
                    {
                        curr[i]=prev[i];
                    }
                    if (curr[i]==half_sum)
                        {
                        cout<<"if"<<endl;
                        return sum-2*curr[i];
                        }
                        
                    else if (curr[i] >half_sum)
                    {
                        cout<<"else if"<<endl;
                        return prev[i];
                    }
                }
                else
                {
                    curr[i]=prev[i];
                }

            }
            prev=curr;
            for (auto u: prev)
            {
                cout<<u<<" ";
            }
            cout<<endl;
        }
        //cout<<"ending"<<endl;
        cout<<curr[half_sum]<<endl;
        return sum-2*curr[half_sum];
    }
  
};

int main()
{
    //vector<int>v{2,4,3,6,8,23,9,4,5,2,6,13,5,11,14,15};
    vector<int>v{16,11,14,17,13,13};
    sort(v.begin(),v.end());
    SubsetSum t(v);
    cout<<t.solve();
    
}