


class Solution {
public:
    bool detectCapitalUse(string word) {
        
        int n=word.size();
        int ind=0,count=0;
        for(int i=0;i<n;i++)
        {
            if(word[i]>='A' && word[i]<='Z')
            {
                count++;
                ind=i;
            }
        }
        if(count==n || count==0 || (count==1 && ind==0))
        {
            return true;
        }
        return false;
 }
