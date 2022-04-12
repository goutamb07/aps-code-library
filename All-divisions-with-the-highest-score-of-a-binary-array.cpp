

class Solution {
public:
    vector<int> maxScoreIndices(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        int rightones(0),leftzeros(0),mx(0);
        for(auto it:nums)
        {
            rightones+=it;
        }
        
        for(int i=0;i<=n;i++)
        {
          
            if(rightones+leftzeros>mx)
            {
                mx=rightones+leftzeros;
                ans.clear();
            }
            
            if(rightones+leftzeros==mx)
            {
                ans.push_back(i);
            }
            
            if(i<n)
            {
                leftzeros+=(nums[i]==0);
                rightones-=nums[i];
            }
            
        }
        return ans;
    }
};
