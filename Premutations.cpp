


class Solution {
public:
    void sol(vector<int> nums,vector<int> &temp,int i, vector<vector<int>>&ans)
    {
        if(i==nums.size())
        {
            ans.push_back(nums);
            return;
        }
        for(int j=i;j<nums.size();j++)
        {
            swap(nums[i],nums[j]);
            sol(nums,temp,i+1,ans);
            swap(nums[i],nums[j]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>temp;
         vector<vector<int>>ans;
        sol(nums,temp,0,ans);
        return ans;
    }
};
