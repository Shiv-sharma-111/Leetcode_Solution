class Solution {
public:
    int minEatingSpeed(vector<int>& vec, int H) {
        int n = vec.size();
        //accumulate function return the sum of all values in range of begin to end;
        long long sum = accumulate(vec.begin(), vec.end(), sum);
        //The ceil function returns the smallest possible integer value which is equal to the value  greater than that
        long avg = ceil(1.0 * sum/H);
        long long maximum = *max_element(vec.begin(), vec.end());
        for(long long i = avg;i <= maximum; i++) {
            int count = 0;
            for(int j = 0;j<n;j++){
                count = count+ceil(1.0 * vec[j]/i);
            }
            if(count <= H) {
                return i;
            }
        }
        // for function returning problem
        return 1;
    }
};
