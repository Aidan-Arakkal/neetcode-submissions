class Solution {
public:
    vector<string> generateParenthesis(int n) {
        std::vector<std::string> result;
        backtrack("",result, 0, 0, n);
        return result;

    }
private:
    void backtrack(std::string current, std::vector<std::string> &result,int open, int close, int max){
        if(current.length()==max*2){
            result.push_back(current);
            return;
        }
        if(close<open){
            backtrack(current + ")", result, open, close+1, max);
        }
        if(open<max){
            backtrack(current + "(", result, open+1, close, max);
        }

    }
};
