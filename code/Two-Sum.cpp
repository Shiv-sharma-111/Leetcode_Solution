class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int> mapi;
        int n = nums.size();
        vector<int> ans;
        for(int i=0; i < n; i++){
            int rem = target - nums[i];
            if(mapi.find(rem) != mapi.end()){
                ans.push_back(mapi[rem]);
                ans.push_back(i);
                return ans;
            }
            mapi[nums[i]] = i;
        }
        return ans;
    }
};
