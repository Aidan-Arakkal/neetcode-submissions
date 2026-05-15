class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int j = numbers.size()-1;
        int i = 0;

        while (i<j){
            if(target<numbers[i]+numbers[j]){
                j--;
            }
            else if((target>numbers[i]+numbers[j])){
                i++;
            }
            else if(target == numbers[i]+numbers[j]){
                return {i+1,j+1};
            }
        }
        return {};


    }
};
