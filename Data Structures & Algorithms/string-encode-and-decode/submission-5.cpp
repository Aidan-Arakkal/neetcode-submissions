class Solution {
public:

    string encode(vector<string>& strs) {
        std::string code;
        for (std::string s: strs){
            for(char a: s){
                code+=a;

            }
            code+= "#@3";
        }
        return code;
    }

    vector<string> decode(string s) {
        {
            std::vector<std::string> words;
            std:: string decoded;
            int count = 0;
            for(int i = 0;i<s.length();i++){
                if(s[i]=='#' && s[i+1]=='@'&& s[i+2]=='3')
                {
                    words.push_back(decoded);
                    decoded = "";
                    i+=2;
                }
                else{
                    decoded+=s[i];
                }
                
            }
            return words;
        }

    }
};
