class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0;
        int j = heights.size()-1;
        int max = 0;
        int current = 0;
        while(i<j){
            current = std::min(heights[i],heights[j])*(j-i);
            max = std::max(max,current);
            if(heights[i]>heights[j]){
                j--;
            }
            else if(heights[i]<heights[j]){
                i++;
            }
            while(heights[i]==heights[j] && i<j){
                current = std::min(heights[i],heights[j])*(j-i);
                max = std::max(max,current);
                if(heights[i+1]>heights[j-1]){
                    i++;
                }
                else if(heights[i+1]<heights[j-1]){
                    j--;
                }
                else{
                    i++;
                    j--;
                }
            }
        }
        return max; 
    }
};
