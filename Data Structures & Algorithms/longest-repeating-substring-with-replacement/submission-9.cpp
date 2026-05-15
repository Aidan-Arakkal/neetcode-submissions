#include <unordered_map>
class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> charamount;
        int i =0;
        int j = 0;
        int maxchar = 0;
        int longeststring = 0;

        while(i<=j && j<s.length()){
                charamount[s[j]]++;
                maxchar = std::max(charamount[s[j]],maxchar);
                if(j-i+1-maxchar<=k){
                    longeststring = std::max(longeststring,j-i+1);
                    j++;

                }
                else{
                    while(j-i+1-maxchar>k){
                        charamount[s[i]]--;
                        i++;
                        
                    }
                    longeststring = std::max(longeststring,j-i+1);   
                    j++;
                }
            }
            
        
        return longeststring;
    }

};
