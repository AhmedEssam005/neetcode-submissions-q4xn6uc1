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
    int rec(TreeNode*root,int& res){
        if(!root) return 0;
        int l=rec(root->left,res);
        int r=rec(root->right,res);
        res=max(abs(l-r),res);
        return 1 + max(l,r);
    }
    bool isBalanced(TreeNode* root) {
        int res=0;
        rec(root,res);
        return res<=1;   
    }
};
