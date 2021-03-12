#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s ="aasddddjjjjjjkkkkkfffffllllssssslllssaaaajjjjhhhhhh";
    unsigned long long sum=0;
    int i;
    char cur_c= ' ';
    int char_freq=0;
    float temp_sum =0;
    const unsigned int M = 1000000007;
    for(i =0;i<s.size();i++)
    {
        if(s[i]==cur_c)
        {
            char_freq++;
        }
        else
        {
            sum=(sum+(char_freq*(char_freq+1))/2)%M;
            
            cout<<sum<<" i: "<<i<<" temp_sum: "<<c_n_p(char_freq)<<endl;
            cur_c=s[i];
            char_freq=1;
        }
    }
    sum+=(char_freq*(char_freq+1))/2;
    cout<<sum<<endl;
}