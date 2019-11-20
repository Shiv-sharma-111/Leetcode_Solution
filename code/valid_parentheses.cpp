class Solution {
public:
    bool isValid(string s) {
        stack <char> stc;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
                stc.push(')');
            else if(s[i]=='{')
                stc.push('}');
            else if(s[i]=='[')
                stc.push(']');
            else if(stc.empty()||stc.top()!=s[i])
                return false;
            else
                stc.pop();
        }
        return stc.empty();
        
        
    }
};
