#include<bits/stdc++.h>
using namespace std;

int main()
{
    string text ="leetcode";
    string x ="balon";
    //l==2,o==2
    unordered_map<char,int>umap;

    int freq_x =0,freq_w=99999,i;
    //insert
    for(i=0;i<text.size();i++)
    {
        if(text[i]=='b'||'')
        umap[text[i]]++;
    }

    unordered_map<char,int>::iterator it;
    for(i=0;i<x.size();i++)
    {
        it =umap.find(x[i]);
        if(it !=umap.end())
        {
            if(it->first =='l'||it->first =='o')
            {
                it->second/=2;
            }
            if(freq_w>it->second)
            {
                freq_w=it->second;
            }
        }
        else
        {
            freq_w =0;
            break;
        }

    }
    cout<<freq_w;

}