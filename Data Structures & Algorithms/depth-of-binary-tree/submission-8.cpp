/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
#include <stack>

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(!root){
            return 0;
        }
        
        std::stack<pair<TreeNode*,int>> stack;
        stack.push({root,1});
        int maxDepth = 0;
        while(!stack.empty()){
            pair<TreeNode*,int> p = stack.top();
            TreeNode* ptr = p.first;
            int depth = p.second;
            maxDepth = std::max(depth,maxDepth);
            stack.pop();
            if(ptr->right){
                stack.push({ptr->right,depth+1});
            }
            if(ptr->left){
                stack.push({ptr->left,depth+1});
            }
        }
        return maxDepth;
    }
};
