#include <vector>
class MinStack {
private:
    std::vector<int> stack;
public:
    MinStack() {

    }
    
    void push(int val) {
        stack.push_back(val);
    }
    
    void pop() {
        if(stack.empty()){
            throw std::out_of_range("Pop on empty stack");
        }
        stack.pop_back();
    }
    
    int top() {
        if(stack.empty()){
            throw std::out_of_range("Top on empty stack");
        }
        return(stack[stack.size()-1]);
    }
    
    int getMin() {
        if(stack.empty()){
            throw std::out_of_range("getMin on empty stack");
        }
        int min = stack[0];
        for(int i : stack){
            min = std::min(i,min);
        }
        return min;
    }
    
};
