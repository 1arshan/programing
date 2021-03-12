#include<bits/stdc++.h>
using namespace std;

void insertion_hashing(vector<int>&V,string chars)
{
    int temp;
    for(int i =0;i<chars.size();i++)
    {
        temp =chars[i];
        V[temp-97]+=1;
        //cout<<V[temp-97]<<endl;
        
    }
}


int checking(vector<int> &W,vector<int> &C)
{   //comparision
    int count =0,i =0;
    
    for (auto &it:W){
        
        if(it >=1)
        {
            
           if(it <=C[i])
           {
               
               count+=it;
               
           }
           else
           {
               return 0;
           }
        }
        
        i++;
    }
    return count;
}


int main()
{
    //vector<string> words {"hello","world","leetcode","abcde"};
    vector<string> words {"cat","bt","hat","tree"}; 
    string chars = "atach";
    vector<int> chars_hash(26); //hashes chars
    vector<int> words_hash(26);//hashes words
     
    int word_freq =0;
    insertion_hashing(chars_hash,chars); //hashes chars
    
    //cout<<"Char Completer"<<endl;
    for(int i =0;i<words.size();i++)
    {   insertion_hashing(words_hash,words[i]);//hashes words
        word_freq+=checking(words_hash,chars_hash);
        words_hash.clear();
        cout<<"i: "<<i<<" word_freq: "<<word_freq<<endl;
    }
    cout<<word_freq;


}