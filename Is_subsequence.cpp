

class Solution {
public:
    bool check(string s,string t)
    {
        int ns=s.size(),nt=t.size(),i=0,j=0;
        while(i<ns && j<nt)
        {
            if(s[i]==t[j]) i++;
            if(i==ns) return 1;
            j++;
        }
        return 0;
    }
    
    bool isSubsequence(string s, string t) {
       if(s.size()>t.size())    return false;
        if(s.size()==0) return 1;
        return check(s,t);
    }
};
