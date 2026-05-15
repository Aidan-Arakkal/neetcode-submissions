class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int high = row*col-1;
        int low = 0;
        while(low<=high){
            int index = low+(high-low)/2;
            int num = matrix[index/col][index%col];
            if(num == target){
                return true;
            }
            if(num>target){
                high = index-1;
            }
            if(target>num){
                low = index+1;
            }
        }
        return false;

    }
};
