

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) 
    {
        vector<string>ans;
        if(nums.size()==0)
        {
            return ans;
        }
        for(int i=0,n=nums.size();i<nums.size();i++)
        {
            int prev=nums[i];
            while(i+1<n && nums[i]+1==nums[i+1])
            {
                i++;
            }
            
                if(prev==nums[i])
                {
                    ans.push_back(to_string(prev));
                }else
                {
                    string s=to_string(prev) +"->" +to_string(nums[i]);    
                    ans.push_back(s);
                }
                prev=nums[i];
            }   
        return ans;
    }
};
