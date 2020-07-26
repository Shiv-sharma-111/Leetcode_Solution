class Solution {
public:
    int titleToNumber(string s) {
        int count=0;
        for(auto ch : s)
        {
            count *=26;
            count += ch - 'A' +1;
        }
        return count;
    }
};
