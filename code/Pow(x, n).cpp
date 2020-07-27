class Solution {
public:
    double sol(double x,int n)
    {
        if(n==0 || x == (double)1)
        {
            return 1;
        }
        double temp = sol(x,n/2);
            if(n%2==0)
            {
                return temp*temp;
            }
            else
            {
                return x*temp*temp;
            }
    }
    double myPow(double x, int n) {
        double k=1;
        if(n<0)
        {
            n = abs(n);
             k = k/ sol(x,n);
            return k;
        }
        else
        {
            k = sol(x,n);
            return k;
        }
    }
};
