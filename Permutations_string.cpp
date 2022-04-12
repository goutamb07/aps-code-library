class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>mp1(26),mp2(26);
        for(int i=0;i<s1.size();i++)
        {
            mp1[s1[i]-'a']++;
        }
        for(int i=0;i<s2.size();i++)
        {
            mp2[s2[i]-'a']++;
            
            if(i>=s1.size())
            {
                mp2[s2[i-s1.size()]-'a']--;
            }
            if(mp1==mp2)
            {
                return true;
            }  
        }
        return false;
    }
};
