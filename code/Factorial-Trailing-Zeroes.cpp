class Solution {
public:
    int trailingZeroes(int n) {
        int count=0;
        long long i=5;
        while(i<=n)
        {
            count += (n/i);
            i = i*5;
        }
        return count;
    }
};
