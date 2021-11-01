// #inlcude<bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;


class Sol
{
    public:
    
    int dis(int t)
    {
        int n,d,c,m,j;
        string s;
        cin>>n>>d>>c>>m>>s;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='C')
            {
                if(c)
                    c--;
                else
                    {
                        for(j=i+1;j<s.size();j++)
                        {
                            if(s[j]=='D')
                                break;
                        }
                        if(j==s.size())
                            {
                                cout<<"Case #"<<t+1<<": YES"<<endl;
                                return 1;
                            }
                        cout<<"Case #"<<t+1<<": NO"<<endl;
                        return 1;
                    }
            }
            else
            {
                if(d)
                {
                    d--;
                    c+=m;
                }
                else
                {
                    cout<<"Case #"<<t+1<<": NO"<<endl;
                    return 1;
                }
            }
        }
        cout<<"Case #"<<t+1<<": YES"<<endl;
        return 1;
    }
};

int main()
{
    int t,n,d,c,m;
    string s;
    cin>>t;
    Sol x;
    for(int i=0;i<t;i++)
    {
        x.dis(i);
    }
    return 0;
}