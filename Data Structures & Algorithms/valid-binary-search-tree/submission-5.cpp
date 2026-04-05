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
    bool rec (TreeNode* root ,int&prev){
        if(!root) return true;
        bool l=rec(root->left,prev);
        if(root->val<=prev) return false;
        prev = root->val;
        bool r=rec(root->right,prev);
        return l&&r;
    }
    bool isValidBST(TreeNode* root) {
        int x =INT_MIN;
        return rec(root,x);
    }
};
