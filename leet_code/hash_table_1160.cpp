#include<bits/stdc++.h>
using namespace std;

void insertion_u_s(unordered_multiset<int> &s,string chars)
{
    for(int i =0;i<chars.size();i++)
    s.insert(chars[i]);
}

int search_s(unordered_multiset<int> s,string chr)
{
    int count =0;
    unordered_multiset<int>::iterator it;
    for(int i =0;i<chr.size();i++)
    {   it =s.find(chr[i]);
        if(it!=s.end())
        {
            count++;
            cout<<count<<endl;
            s.erase(it);
            //cout<<"s: "<<s<<endl
        }
        else
        {
            return 0;
        }
    }
    return count;
}

int main()
{
    vector<string> words {"cat","bt","hat","tree"}; 
    string chars = "atach";
    
    unordered_multiset<int> s; 
    int word_freq =0;
    insertion_u_s(s,chars); 
    for(int i =0;i<words.size();i++)
    {   
        word_freq+=search_s(s,words[i]);
        cout<<"i: "<<i<<" word_freq: "<<word_freq<<endl;
    }
    cout<<word_freq;


}