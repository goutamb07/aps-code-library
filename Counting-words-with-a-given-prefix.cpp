

class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int ans=0;
        for(int i=0;i<words.size();i++)
        {
            int flag=1;
            if(words[i].size()>=pref.size())
            {
                for(int k=0; k<words[i].size() && k<pref.size();k++)
                {
                    if(pref[k]!=words[i][k])
                    {
                        flag=0; 
                        if(k==0) break;
                    }    
                }
                if(flag)
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};
