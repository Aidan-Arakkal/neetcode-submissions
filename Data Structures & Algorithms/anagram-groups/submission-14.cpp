class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::vector<std::vector<string>> finalanswers;

        for(int i = 0; i<strs.size(); i++){
            if (strs[i] == "1234") continue;
            std::vector<string> current;
            std::unordered_map<char, int> currword;
            string ogword = strs[i];
            current.push_back(ogword);
            for(int k = 0; k<ogword.length(); k++){
                currword[ogword[k]]++;
            }
            for(int j = i+1; j<strs.size(); j++){
                if (strs[j] == "1234") continue;
                string nwword = strs[j];
                if(ogword.length() != nwword.length()){
                    continue;
                }
                std::unordered_map<char, int> newword;
                
                for(int l = 0; l<nwword.length(); l++){
                    newword[nwword[l]]++;
                }
                if(currword == newword){
                    current.push_back(nwword);
                    strs[j] = "1234";
                }
            }
            if(current.size() != 0){
                finalanswers.push_back(current);
            }

        }
        return finalanswers;

    }
};
