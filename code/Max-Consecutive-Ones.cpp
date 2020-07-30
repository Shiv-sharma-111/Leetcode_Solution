class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0,ans=0,i=0;
        while(i<nums.size())
        {
            if(nums[i]==1)
            {
                count++;
                ans = max(ans,count);
                i++;
            }
            else
            {
                count=0;
                i++;
            }
        }
        return ans;
    }
};
