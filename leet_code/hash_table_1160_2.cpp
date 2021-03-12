#include<bits/stdc++.h>
using namespace std;

void insertion_hashing(unordered_map<char,int> &M,string chars)
{
    for(int i =0;i<chars.size();i++)
    {
        if(M.find(chars[i])==M.end())
        {
            M.insert(make_pair(chars[i],1));
        }

        else
        {
            M[chars[i]]++;
        }
        
    }
}


int checking(unordered_map<char,int> &W,unordered_map<char,int> &C)
{
    int count =0;
    //auto it_c =C;
    unordered_map<char, int>:: iterator it_c; 
    for (auto &it:W){
        it_c =C.find(it.first);
        if(it_c!=C.end())
        {
            if(it_c->second >=it.second)
            {
                count+=it.second;
            }
            else
            {
                return 0;
            }
            
        }
        else
        {
            return 0;
        }
        
    }return count;
}


int main()
{
    vector<string> words {"hello","world","leetcode"}; 
    string chars = "welldonehoneyr";
    unordered_map<char,int>u_m;
    unordered_map<char,int>words_hash; 
    int word_freq =0;
    insertion_hashing(u_m,chars); //hashes chars
   
    for(int i =0;i<words.size();i++)
    {   insertion_hashing(words_hash,words[i]);//hashes words
        word_freq+=checking(words_hash,u_m);
        words_hash.clear();
        cout<<"i: "<<i<<" word_freq: "<<word_freq<<endl;
    }
    cout<<word_freq;


}