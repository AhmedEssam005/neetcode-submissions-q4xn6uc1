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
    void rec(TreeNode* root, vector<vector<int>>& ret,int index){
        if(!root) return;
        if(ret.size()>index) ret[index].push_back(root->val);
        else ret.push_back({root->val});
        rec(root->left,ret,index+1);
        rec(root->right,ret,index+1);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ret;
        rec(root,ret,0);
        return ret;
    }
};
