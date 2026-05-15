class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()){
            return false;
        }
        std::vector<int> s1count (26,0);
        std::vector<int> s2count (26,0);
        for(char a: s1){
            s1count[a-'a']++;
        }
        int index = 0;
        while(index<s2.size()){
            s2count[s2[index]-'a']++;
            if(index>=s1.size()){
                s2count[s2[index-s1.size()]-'a']--;
            }
            
            if(s1count == s2count){
                return true;
            }
            index++;

        }
        return false;

    }
};
