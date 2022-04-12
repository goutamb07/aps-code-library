https://leetcode.com/problems/construct-string-with-repeat-limit/

class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
        int n=s.size();
        string ans="";
        priority_queue<pair<char,int>>pq;
        sort(s.begin(),s.end());
        unordered_map<char,int>mp;
        queue<pair<char,int>>q;
        for(auto it:s)
        {
           mp[it]++;
        }
        for(auto it:mp)
        {
            pq.push({it.first,it.second});
        }
        
        
        while(!pq.empty())
        {
            char chr1=pq.top().first;
            int freq1=pq.top().second;
            pq.pop();
            
            if(ans.size()==0 || ans.back()!=chr1)
            {
                int lim=min(freq1,repeatLimit);
                
                for(int i=0;i<lim;i++)
                {
                    ans+=chr1;
                }
                freq1-=lim;
                if(freq1)
                {
                    pq.push({chr1,freq1});    
                }
            }
            else{
                    if(pq.size()==0) break;
                    char chr2=pq.top().first;
                    int freq2=pq.top().second;
                    pq.pop();  
                    ans+=chr2;
                    freq2--;
                    
                if(freq2)
                {
                 pq.push({chr2,freq2});   
                }
                pq.push({chr1,freq1});
            }
        }
       return ans;
    }
};
