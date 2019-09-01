class Solution {
public:
    bool isPalindrome(int x) {
    	string str= to_string(x);
    	string str1= to_string(x);
    	if(str[0]=='-')
    	{
    		return false;
		}
		reverse(str.begin(), str.end()); 
		if(str==str1)
		{
			return true;
		}
		else
		{
			return false;
		}
        
    }
};

//I AM VERY HAPPY BECAUSE THIS IS FIRST LEETCODE PROBLEM SUBMIT TOTALLY BY OWN METHOD
