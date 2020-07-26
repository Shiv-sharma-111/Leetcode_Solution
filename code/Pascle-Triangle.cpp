class Solution {
public:
    void Getsub(vector<vector<int>>& v,vector<int>& vi,int i){
    for(int a=0;a<v[i-1].size()-1;a++){
        vi.push_back(v[i-1][a]+v[i-1][a+1]);
    }
}
vector<vector<int>> generate(int numRows) {
    vector<vector<int>> v;
    vector<int> vi;
    for(int i=0;i<numRows;i++){
        if(i==0){
            vi.push_back(1);
            v.push_back(vi);
        }
        else if(i==1){
            vi.push_back(1);
            vi.push_back(1);
            v.push_back(vi);
        }
        else{
            vi.push_back(1);
            Getsub(v,vi,i);
            vi.push_back(1);
            v.push_back(vi);
        }
        vi.erase(vi.begin(),vi.end());
    }
    return v;
}

};
