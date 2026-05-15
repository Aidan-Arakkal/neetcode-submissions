#include <stack>
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        std::vector<int> result(temperatures.size(),0);
        std::stack<int> stack;
        for(int i = 0; i < temperatures.size(); i++){
            while(!stack.empty() && temperatures[i]>temperatures[stack.top()]){
                int prev = stack.top();
                stack.pop();
                result[prev] = i-prev;
            }
            stack.push(i);
        }
        return result;
    }
};
