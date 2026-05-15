#include <stack>
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        std::stack<int> stack;
        int index = 0;
        int val1 = 0;
        int val2 = 0;
        while(index<tokens.size()){
            if(tokens[index] != "+" && tokens[index] != "-" && tokens[index] != "*" && tokens[index] != "/"){
                stack.push(std::stoi(tokens[index]));
                index++;
            }
            else if(tokens[index] == "+"){
                val1 = stack.top();
                stack.pop();
                val2 = stack.top();
                stack.pop();
                stack.push(val1+val2);
                index++;
            }
            else if(tokens[index] == "*"){
                val1 = stack.top();
                stack.pop();
                val2 = stack.top();
                stack.pop();
                stack.push(val1*val2);
                index++;
            }
            else if(tokens[index] == "-"){
                val2 = stack.top();
                stack.pop();
                val1 = stack.top();
                stack.pop();
                stack.push(val1-val2);
                index++;
            }
            else if(tokens[index] == "/"){
                val2 = stack.top();
                stack.pop();
                val1 = stack.top();
                stack.pop();
                stack.push(val1/val2);
                index++;
            }
        }
        return stack.top();
    }
};
