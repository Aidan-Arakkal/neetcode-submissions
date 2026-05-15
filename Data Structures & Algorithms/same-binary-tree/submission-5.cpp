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

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p&&!q){
            return true;
        }
        else if(!p||!q){
            return false;
        }
        std::queue<TreeNode*> p1;
        std::queue<TreeNode*> q1;
        p1.push(p);
        q1.push(q);
        if(p1.front()->val!= q1.front()->val){
            return false;
        }
        while(!p1.empty() && !q1.empty()){
            TreeNode* current1 = (p1.front());
            p1.pop();
            TreeNode* current2 = (q1.front());
            q1.pop();
            if(current1->left && current2->left){
                if(current1->left->val == current2->left->val){
                    p1.push(current1->left);
                    q1.push(current2->left);
                }
                else{
                    return false;
                }
            }
            else if(current1->left==nullptr && current2->left==nullptr){
            }
            else{
                return false;
            }
            if(current1->right && current2->right){
                if(current1->right->val == current2->right->val){
                    p1.push(current1->right);
                    q1.push(current2->right);
                }
                else{
                    return false;
                }
            }
            else if(current1->right==nullptr && current2->right==nullptr){
            }
            else{
                return false;
            }
            

        }
        return(p1.empty() && q1.empty());

    }
};
