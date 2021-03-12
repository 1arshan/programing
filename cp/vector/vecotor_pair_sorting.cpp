
class Solution {
public:
    int rearrangement(int i,int j,int size1,vector<int>&v_final,vector<pair<int, int>> v_pair)
{   int pos1;
    if(j==0)
    {  
        pos1 =v_pair[i].second;
        v_final[pos1] =j;
        i++;
        j=i;
        
    }
    if(v_pair[j-1].first ==v_pair[j].first &&j !=0)
    {   
        j--;
    }
    else
    {   
        
        pos1 =v_pair[i].second;
        v_final[pos1] =j;
        i++;
        j =i;
    }
    if(i<size1)
    {
        rearrangement(i,j,size1,v_final,v_pair);
    }
    return 1;
    
}

    
    vector<int> smallerNumbersThanCurrent(vector<int> nums) {
        int size1 =nums.size();
        vector<int> v_final(size1);
        vector<pair<int,int>>v_pair;

        int i=0,j =0;
        for(i =0;i<nums.size();i++)
   {
       v_pair.push_back(make_pair(nums[i],i));
   }
     sort(v_pair.begin(),v_pair.end());
   j =i=0;   
    rearrangement(i,j,size1,v_final,v_pair);
        
        return v_final;
    }
};