


class Solution
{
    public:
    int mini=INT_MAX;
    int maxi=INT_MIN;
    void counting(int n,int i,unordered_map<int,vector<int>>&mp)
    {
        int count=0;
        int temp=n;
        while(n)
        {
            count++;
            n=n&n-1;
        }
        mini=min(count,mini);
        maxi=max(count,maxi);
        mp[count].push_back(temp);
    }
    void sortBySetBitCount(int arr[], int n)
    {
        unordered_map<int,vector<int>>mp;
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            counting(arr[i],i,mp);    
        }
        int j=0;
        for(int i=maxi;i>=mini;i--)
        {
            if(mp.find(i)!=mp.end())
            {
                for(auto it:mp[i])
                arr[j++]=it;    
            }
        }
        
    }   
 };
