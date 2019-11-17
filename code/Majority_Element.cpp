class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size()/2;
        unordered_map<int, int> m;
        for(auto c : nums) if(++m[c] > n) return c;
        return -1;
    }
};
