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
    bool rec(TreeNode*root,int maxL,int minR){
        if(!root){
            return true;
        } 
        if(root->val>=maxL || root->val<=minR) return false;
        bool l=rec(root->left,root->val,minR);
        bool r=rec(root->right,maxL,root->val);
        return l&&r;
    }

    bool isValidBST(TreeNode* root) {
        return rec(root,INT_MAX,INT_MIN);

    }
};
