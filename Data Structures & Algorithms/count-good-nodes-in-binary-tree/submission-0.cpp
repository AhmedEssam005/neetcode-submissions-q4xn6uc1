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
    void rec(TreeNode* root,int max,int &count){
        if(!root) return;
        if(root->val>=max){
            max=root->val;
             count++;
        }
        rec(root->left,max,count);
        rec(root->right,max,count);
    }
    int goodNodes(TreeNode* root) {
        int count=0;
        rec(root,INT_MIN,count);
        return count;
    }
};
