class Solution {
public:
int reverse(int x){
std::string str = std::to_string(x);
std::reverse(str.begin(),str.end());
try{
int num = std::stoi(str);
if(x>0){
return num;
}
else{
return -1*num;
}
}
catch(const std::out_of_range& e){
return 0;
}

}
};
