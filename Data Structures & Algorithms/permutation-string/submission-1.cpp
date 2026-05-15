
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length()){
            return false;
        }
        std::string order = s1;
        std::sort(order.begin(),order.end());
        int index = 0;
        std::string substring;

        while(index+s1.length()-1<s2.length()){
            substring = s2.substr(index,s1.length());
            std::sort(substring.begin(),substring.end());
            if(substring==order){
                return true;
            }
            else{
                index++;
            }
        }
        return false;
    }
};
