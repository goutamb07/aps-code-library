

class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int,int>mp;
        int n=nums1.size(),n1=nums2.size(),n2=nums3.size(),n3=nums4.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n1;j++)
            {
                mp[nums1[i]+nums2[j]]++;
            }
        }
        int count=0;
        for(int i=0;i<n2;i++)
        {
            for(int j=0;j<n3;j++)
            {
                if(mp.find(-1*(nums3[i]+nums4[j]))!=mp.end())
                {
                    count+=mp[-1*(nums3[i]+nums4[j])];
                }
            }
        }
        return count;
    }
};
