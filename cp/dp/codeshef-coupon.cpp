// #include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
class Sol
{
    public:
    int n,m;
    int recdp(int j,int i,vector<vector<int>>&cost,vector<vector<int>>&s,vector<vector<int>>&d)
    {
    if(i<0 || j<0 || i>=m ||j>=n)
        return 0;
    
    if(cost[j][i]!=INT_MAX)
        return cost[j][i];
    int temp;
    for(int t=0;t<m;t++)
    {
        temp=recdp(j-1,t,cost,s,d)+s[j][i];
        cost[j][i]=min(cost[j][i],t==i?temp-(d[j][i]>s[j][i]?s[j][i]:d[j][i]):temp);
        // t==i?c[j-1][t]+s[j][t]-d[j][t]:c[j-1][t]+s[j][t]);
    }
    // cout<<"cost["<<j<<"]["<<i<<"] : "<<cost[j][i]<<endl;
    return cost[j][i];
    }
};




int main(void) {
	// your code goes here
	int nod;
	cin>>nod;
	// cout<<nod;
	int i;
    Sol t;
    int p=INT_MAX,temp;

	for(i=0;i<nod;i++)
	{
	    cin>>t.n>>t.m;
	    vector<vector<int>>cost(t.n,vector<int>(t.m,INT_MAX));
	    vector<vector<int>>sp(t.n,vector<int>(t.m,-1));
	    vector<vector<int>>d(t.n,vector<int>(t.m,0));
	   for(int j=0;j<t.n;j++)
	   {
	       for(int k=0;k<t.m;k++)
	           cin>>sp[j][k];
	   }

	   for(int j=1;j<t.n+1;j++)
	   {
	       for(int k=0;k<t.m;k++)
           {
               if(j==t.n)
                {
                    cin>>temp;
                    continue;
                }
               cin>>d[j][k];
           }
	           
	   }
	   for(int j=0;j<t.m;j++)
	   {
	       p=min(p,t.recdp(t.n-1,j,cost,sp,d));
	   }
    //    cout<<"matrix:"<<endl;
    //    for(auto x:cost)
    //    {
    //         for(auto y:x)
    //             cout<<y<<" ";
    //         cout<<endl;
    //    }
	   cout<<endl<<p;
	}
	return 0;
}

