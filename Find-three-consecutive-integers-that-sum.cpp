
class Solution {
public:
    vector<long long> sumOfThree(long long num) 
    {
        long long temp=num/3;
        vector<long long>ans;
        if(temp*3!=num)         //check num/3 if it is a multiple of 3 if not then we cant have consecutive elements  
        {                        //ex: 33/3=11 {11-1,11,11+1}
            return ans;         //ex: 44 is not a multiple of 3 so it cant have consective elements
        }
        
        ans={temp-1,temp,temp+1};   
        return ans;
    }
};
