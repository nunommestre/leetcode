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
    vector<int> a;
    vector<int> postorderTraversal(TreeNode* root) {
        post_order(root);
        return a;
    }
    void post_order(TreeNode* root){
        if(root) {
            post_order(root->left);
            post_order(root->right);
            a.push_back(root->val);
        }
    }
};