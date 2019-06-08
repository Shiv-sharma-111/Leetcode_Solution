class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>bleh={0,0};
        int x=0;
        while(x<nums.size()){
           int start=nums[x];    
            int i=x+1;
            while(i<nums.size()){
                //start=nums[x];
                if (start+nums[i]==target)
                {
                    vector<int> ans={x,i};
                    return ans;
                }
                else
                    i++;
                    }
            x++;
            start=nums[x];
                }
return bleh ;
    }
};
