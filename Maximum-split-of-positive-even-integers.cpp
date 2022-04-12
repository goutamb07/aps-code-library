

class Solution {
public:
    vector<long long> maximumEvenSplit(long long finalSum) {
        vector<long long>ans;
        if(finalSum&1)
        {
            return ans;
        }
        long long temp=0;
        long long sum=0;
        while(temp<finalSum)
        {
            if(temp+sum+2<=finalSum)
            {
                sum=sum+2;
                temp+=sum;
                ans.push_back(sum);
                
            }else{
                ans.pop_back();
                 ans.push_back(sum+(finalSum-temp));  
                break;
            }
            
        }
        return ans;
    }
};
