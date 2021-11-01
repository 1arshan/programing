class StockPrice {
public:
    map<int,int>mp;
    int max;
    int min;
    int cur_t;
    int cur_p;
    // int ma=0,mi=0;
    StockPrice() {
        // map<int,int>mp;
        max=0;
        min=99999;
        // cur_t=0;
        // cur_p=0;
    }
    void umam(int p)
    {
        if(p>max)
        {
            max=p;
        }
        if(p<min)
            min=p;
    }
    
    void update(int t, int p) {
        // ma=0;
        // mi=0;
        int temp=0;
        if(mp.count(t)==0)
        {
            mp.insert({t,p});
            // umam(p);
        }
        else
        {
            temp=mp[t];
            if(max==mp[t])
            {
                max=0;
                mp[t]=p;
                for(auto x:mp)
                {
                    if(x.second>max)
                    {
                        max=x.second;
                    }
                }
            }
            else if(max<p)
                max=p;
            if(min==temp)
            {
                mp[t]=p;
                min=99999;
                for(auto x:mp)
                {
                    if(x.second<min)
                        min=x.second;
                }
                return;
            }
            else if(min>p)
                min=p;
            mp[t]=p;
        } 
    }
    
    int current() {
        return mp.rbegin()->second;
    }
    
    int maximum() {
       return max; 
    }
    
    int minimum() {
        return min;
    }
};

/**
 * Your StockPrice object will be instantiated and called as such:
 * StockPrice* obj = new StockPrice();
 * obj->update(timestamp,price);
 * int param_2 = obj->current();
 * int param_3 = obj->maximum();
 * int param_4 = obj->minimum();
 */