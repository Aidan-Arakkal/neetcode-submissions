class Solution {
public:
    int trap(vector<int>& height) {
        int leftp = 0;
        int rightp = height.size()-1;
        int maxL = height[leftp];
        int maxR = height[rightp];
        int leftv = 0;
        int rightv = 0;
        int water = 0;
        if(height.empty()){
            return 0;
        }
        while(leftp<rightp){
            if(maxL<maxR){
                leftp++;
                leftv = height[leftp];
                maxL = std::max(maxL,leftv);
                water+= maxL-leftv;
            }
            else{
                rightp--;
                rightv = height[rightp];
                maxR = std::max(maxR,rightv);                
                water+= maxR-rightv;                
                }   
            
        }
        return water;
    }
};
