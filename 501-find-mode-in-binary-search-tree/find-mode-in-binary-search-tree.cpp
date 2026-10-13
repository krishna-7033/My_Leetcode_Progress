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
    void traverse(TreeNode* root,unordered_map<int,int>&got){
        if(root==NULL){
            return ;
        }
        traverse(root->left,got);
        got[root->val]++;
        traverse(root->right,got);
    }
    vector<int> findMode(TreeNode* root) {
        unordered_map<int,int>got;
        traverse(root,got);
         vector<int>ans;
          int maxFreq = 0;
        for (auto& k : got) {
            maxFreq = max(maxFreq, k.second);
        }
         for(auto k:got){
            if(k.second>=maxFreq){
                ans.push_back(k.first);
            }
         }
         return ans;
    }
};