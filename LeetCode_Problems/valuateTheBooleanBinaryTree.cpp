// problem link
// https://leetcode.com/problems/evaluate-boolean-binary-tree/?envType=daily-question&envId=2024-05-16

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

    bool evaluateTree(TreeNode* root) {
        if(root->left == nullptr && root->right == nullptr){
            if(root->val == 1){
                return true;
            }else{
                return false;
            }
        }

        bool left_val = evaluateTree(root->left);
        bool right_val = evaluateTree(root->right);

        if(root->val == 2){
            return left_val || right_val;
        }

        return left_val && right_val;
    }
};
