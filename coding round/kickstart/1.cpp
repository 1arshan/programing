#include<bits/stdc++.h>
using namespace std;

bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
    {
    return (a.second < b.second);
    }

class Solution
{
    
    public:
    string temp="";
    int fv(vector<pair<int,int>>&v,string &s)
    {
        char c='x';
        int t=c;
        for(auto x:s)
        {
            c=x;
            t=c-97;
            v[t].second++;
        }
        return 1;
    }

    int srever(vector<pair<int,int>>&v,string &s,int lo,int up)
    {   
        // string temp="";
        char c='x';
        int t=c;
        // cout<<lo<<" "<<up<<endl;
        for(auto x:s)
        {
            c=x;
            t=c-97;
            for(int i=up;i>=lo;i--)
            {
                if(v[i].second!=0 && t!=v[i].first)
                {
                    c=v[i].first+97;
                    temp.push_back(c);
                    v[i].second--;
                    break;
                }
            }
            
        }
        return 1;
    }

    int con(vector<pair<int,int>>&v,string &s)
    {
        fv(v,s);
        sort(v.begin(), v.end(), sortbysec);
        int lo=0,up=25;
        for(int i=25;i>=0;i--)
        {
            if(v[i].second==0)
            {
                lo=i+1;
                break;
            }
        }
        // for (int i=0; i<26; i++)
        // {
        // cout << v[i].first << " "
        //      << v[i].second << endl;        
        // }
        // cout<<lo<<" "<<up<<endl;
        // return 
        srever(v,s,lo,up);
        // for (int i=0; i<26; i++)
        // {
        // cout << v[i].first << " "
        //      << v[i].second << endl;        
        // }
        return 1;
    }
};

int main()
{
    int freq;
    cin>>freq;
    vector< pair <int, int> > v(26,make_pair(0,0));
    // for(int i=0;i<26;i++)
    // {
    //     v[i].first=i;
    //     v[i].second=0;
    // }
    string s;
    Solution t;
    string temp;
    for(int i=0;i<freq;i++)
    {
        for(int i=0;i<26;i++)
        {
        v[i].first=i;
        // v[i].second=0;
        }
        cin>>s;
        t.con(v,s); 
        cout<<"Case #"<<i+1<<": ";
        if(t.temp.size()!=s.size())
            cout<<"IMPOSSIBLE"<<endl;
        else
            cout<<t.temp<<endl;
        t.temp="";
        // cout<<t.temp;
    }
    return 1;
}