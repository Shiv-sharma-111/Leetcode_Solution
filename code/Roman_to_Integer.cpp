class Solution {
public:
    int romanToInt(string s) {
        vector<int> vec;
        map<char,int> m;
        m['I']=1;
        m['V']=5;
        m['X']=10;
        m['L']=50;
        m['C']=100;
        m['D']=500;
        m['M']=1000;
        for(int i=0;i<s.size();)
        {
            if(i!=s.size()-1)
            {
                if(m[s[i]]<m[s[i+1]])
                {
                    vec.push_back(m[s[i+1]]-m[s[i]]);
                    i=i+2;
                }
                else
                {
                    vec.push_back(m[s[i]]);
                    i++;
                }
            }
            else
            {
                vec.push_back(m[s[i]]);
                i++;
            }
            
        }
        int sum=0;
        for(int i=0;i<vec.size();i++)
        {
            sum+=vec[i];
        }
            return sum;
    }
};
