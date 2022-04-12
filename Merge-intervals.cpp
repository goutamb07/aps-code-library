

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {        
        vector<vector<int>>merged_intervals;
        vector<int>temp(2);
        sort(intervals.begin(),intervals.end());
        temp[0]=intervals[0][0];
        temp[1]=intervals[0][1];
        int n=intervals.size();
        for(int i=0;i<n;i++)
        {
            if(intervals[i][0]<=temp[1])
            {
                temp[1]=max(temp[1],intervals[i][1]);
            }else{
                merged_intervals.push_back(temp);
                temp[0]=intervals[i][0];
                temp[1]=intervals[i][1];
            } 
        }
        merged_intervals.push_back(temp);
        return merged_intervals;
    }
};
