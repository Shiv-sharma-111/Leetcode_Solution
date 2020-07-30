class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int arr[128]={0},l=0,r=-1,ml=0;
	    while(++r<s.length())
	        if(arr[s[r]]++ && (ml=max(ml,r-l)))
	            while(arr[s[r]]>1) arr[s[l++]]--;
	    ml=max(ml,r-l);
        return ml;
    }
};
