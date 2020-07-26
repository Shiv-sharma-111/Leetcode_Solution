class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        bool flag = next_permutation(nums.begin(),nums.end());
        if(flag==false)
        {
            sort(nums.begin(),nums.end());
            for(int i=0;i<nums.size();i++)
            {
                cout<<nums[i]<<" ";
            }
            cout<<"\n";
        }
        else
        {
            for(int i=0;i<nums.size();i++)
            {
                cout<<nums[i];
            }
            cout<<"\n";
        }
    }
};
