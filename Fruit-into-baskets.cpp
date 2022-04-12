


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size(),count=0;
        int cand=0;
        int ele=0;
      for(int i=0;i<n;i++)
      {
          if(count==0)
          {
              cand=nums[i];
          }
        if(cand==nums[i])
        {
            count+=1;
        }else{
            count--;
        }
      }
        return cand;
    }
};
