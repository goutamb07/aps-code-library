class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         vector<int> watch(326,0);
        if(s.length()==0 || s.length()==1)
        {
            return s.length();
        }
        watch[s[0]]++;
        int i(0),j(0),len(1);
        while(j<s.length()-1)
        {
            if(watch[s[j+1]]==0)
            {
                j++;
                watch[s[j]]++;
                 len=max(len,j-i+1);
                
            }else{
                watch[s[i++]]--;
            }
           
        }
        return len;
    }
};
