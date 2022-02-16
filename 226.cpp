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
    TreeNode* invertTree(TreeNode* root) {
        InvertNode(root);
        return root;
    }

private:
    void InvertNode(TreeNode *root) {
        if (!root) {
            return;
        }
        TreeNode *temp = root->left;
        root->left = root->right;
        root->right = temp;

        InvertNode(root->left);
        InvertNode(root->right);
    }
};
