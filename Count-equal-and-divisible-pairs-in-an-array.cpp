

class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        unordered_map<int,vector<int>>mp;
        int n=nums.size(),count=0;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]].push_back(i);
        }
        
        if(mp.size()==n)
        {
            return 0;
        }
        
        for(auto it:mp)
        {
            for(int i=0;i<it.second.size()-1;i++)
            {
                for(int j=i+1;j<it.second.size();j++)
                {
                    if((it.second[i]*it.second[j])%k==0) count++;
                } 
            }
        }
        return count;
    }
};
