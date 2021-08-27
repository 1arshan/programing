class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        int pos=0,i=0;
        string temp;
        
        for(i=0;i<words.size();i++)
        {
            if(pos<s.size())
            {
            temp=words[i];
            for(auto x:temp)
            {
                if(s[pos]==x)
                {
                    pos++;
                }
                else
                {
                    return false;
                }
            }
        }
            else
            {
                return true;
            }
            }
        if(pos!=s.size())
            return false;
        return true;
    }
};