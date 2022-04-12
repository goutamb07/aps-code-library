



class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> mp1(26,0);
        vector<int> mp(26,0);
        vector<int>ans;
        if(s.size()<p.size())
        {
            return ans;
        }
        
        for(int j=0;j<p.size();j++)
        {
            mp[p[j]-'a']++;
            mp1[s[j]-'a']++;
        }
        
        if(mp1==mp)
        {
          ans.push_back(0);
        }
        
        for(int i=p.size();i<s.size();i++)
        { 
            mp1[s[i-p.size()]-'a']--;
            mp1[s[i]-'a']++;
            if(mp1==mp)
            {
                ans.push_back(i-p.size()+1);
            }
        }
        return ans;
    }
};
