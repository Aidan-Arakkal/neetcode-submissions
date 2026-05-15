#include<unordered_map>
#include<unordered_set>
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int rowCount = 0;
        int colCount = 0;
        int count = 0;
        for(int row = 0; row<9;row++){
            unordered_set<char> rowSet;
            unordered_set<char> colSet;
            unordered_set<char> boxSet;
            if(row%3==0&&row!=0){
                rowCount+=3;
            
            }
            colCount = (row%3)*3;
            for(int col = 0; col<9;col++){
                
                //rowSet
                if (rowSet.count(board[row][col])){
                    return false;
                }
                else if(board[row][col]!= '.'){
                    rowSet.insert(board[row][col]);
                }
                
                if(colSet.count(board[col][row])){
                    return false;
                }
                else if(board[col][row]!= '.'){
                    colSet.insert(board[col][row]);
                }
                
                if(boxSet.count(board[rowCount+col/3][colCount+col%3])){
                    return false;
                }
                else if(board[rowCount+col/3][colCount+col%3]!='.'){
                    boxSet.insert(board[rowCount+col/3][colCount+col%3]);
                }

                
            }
        }
        return true;
    }
};
