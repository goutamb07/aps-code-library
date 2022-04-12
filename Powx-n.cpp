

class Solution {
public:
    double myPow(double x, int n) {
        double a;
        if(n>0)
        {
            a=pow(x,n);
        }else
            if(n==0)
        {
            a= 1;
        }else if(n<0)
            {
            
                a=pow(x,n);
            }
        return a;
    }
};
