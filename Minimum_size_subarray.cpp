class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size(),sum=0;
        int j=0,len=INT_MAX,newsum=0;
        // sum-=target;
        for(int i=0;i<n;i++)
        {
            newsum+=nums[i];
            while(newsum>=target) 
            {
                len=min(len,i-j+1);
                newsum-=nums[j++];
            }
        }
        if(len==INT_MAX) return 0;
        return len;
    }
};
