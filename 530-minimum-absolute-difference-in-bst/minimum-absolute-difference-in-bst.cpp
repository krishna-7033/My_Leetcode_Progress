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
    void check(TreeNode* root,vector<int>&okk){
        if(root==NULL){
            return;
        }
        check(root->left,okk);
        okk.push_back(root->val);
        check(root->right,okk);
    }
    int getMinimumDifference(TreeNode* root) {
        vector<int>okk;
        check(root,okk);
        int min_diff = INT_MAX;
        for (int i = 1; i < okk.size(); i++) {
            min_diff = min(min_diff, okk[i] - okk[i-1]);
        }
        
        return min_diff;
    }
};