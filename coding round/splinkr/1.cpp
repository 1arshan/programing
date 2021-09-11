#include<bits/stdc++.h>
using namespace std;


class Sol
{
    public:
    int n=100;
    // vector<vector<int>>pc((int)100, vector<int>((int)9,(int)0));
    vector<vector<int>>v1{{1}};
    vector<vector<int>>v2{{2,2}};
    vector<vector<int>>v3{{1,2,2},{3,3,3}};
    vector<vector<int>>v4{{1,3,3,3},{4,4,4,4}};
    vector<vector<int>>v5{{2,2,3,3,3},{1,4,4,4,4},{5,5,5,5,5}};
    vector<vector<int>>v6{{2,2,4,4,4,4},{1,5,5,5,5,5},{6,6,6,6,6,6}};
    vector<vector<int>>v7{{3,3,3,4,4,4,4},{2,2,5,5,5,5,5},{1,6,6,6,6,6,6},{7,7,7,7,7,7,7}};
    vector<vector<int>>v8{{3,3,3,5,5,5,5,5},{2,2,6,6,6,6,6,6},{1,7,7,7,7,7,7,7},{8,8,8,8,8,8,8,8}};
    vector<vector<int>>v9{{4,4,4,4,5,5,5,5,5},{3,3,3,6,6,6,6,6,6},{2,2,7,7,7,7,7,7,7},{1,8,8,8,8,8,8,8,8},{9,9,9,9,9,9,9,9,9}};
    vector<vector<int>>pc{
        {{1,0,0,0,0,0,0,0,0},
         {0,1,0,0,0,0,0,0,0},
         {1,1,1,0,0,0,0,0,0},
         {1,0,1,1,0,0,0,0,0},
         {1,1,1,1,1,0,0,0,0},
         {1,1,0,1,1,1,0,0,0},
         {1,1,1,1,1,1,1,0,0},
         {1,1,1,0,1,1,1,1,0},
         {1,1,1,1,1,1,1,1,1}
        },
        
    };
    int convert_to_vector(long long n)
    {
        int nod=0;
        long long temp=n;
        while(temp!=0)
        {
            temp=temp/10;
            nod++;
        }
        temp=n;
        vector<int>v(nod,0);
        nod--;
        while (temp!=0)
        {
            v[nod]=temp%10;
            temp=temp/10;
            nod--;
        }
        vector<int>temp(n,0);
        for(int i=v.size();i<13;i++)
        {
            possible_combination(i,v,1,temp);
        }
    }



    int possible_combination(int n,vector<int>&v,int pos,vector<int>&temp)
    {
        if(n<10)
        {
            if(pc[n-1][pos-1])
            {
                temp[pos-1]=pos;
            }
            else
            {
                //
            }
        
            if()
        }

    }
    
};

int main()
{
    int freq=0;
    cin>>freq;
    long long n;
    Sol t;
    for(int i=0;i<freq;i++)
    {
        cin>>n;
        // convert_to
        t.convert_to_vector(n);
    }

}