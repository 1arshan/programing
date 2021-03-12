#include<bits/stdc++.h>
using namespace std;

int main()
{
    string allowed ="abc";
    vector<string>words{"a","b","c","ab","ac","bc","abc"};
    int i =0,j,w,temp=0,freq=0;
    for(i=0;i<words.size();i++)
    {
        for(j=0;j<words[i].size();j++)
        {
            for(w =0;w<allowed.size();w++)
            {
                if(words[i][j]==allowed[w])
                {   
                    if(j==(words[i].size()-1))
                    {   
                        freq++;
                        //cout<<"i: "<<i<<" j: "<<j<<" w: "<<w<<endl;
                        //cout<<words[i]<<endl;
                    }
                    break;
                }
                else
                {
                    if(w==allowed.size()-1)
                    temp=1;
                    //continue;
                    
                }   
            }//tmep=0 ka bnanna hai
            if(temp==1)
            {
                break;
            }
        }
        temp =0;
    }
    cout<<freq;
}