/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution
{
public:
    int dfs(TreeNode *root, bool left)
    {
        if (root->left == NULL && root->right == NULL)
            return left ? root->val : 0;
        int sum = 0;
        if (root->left != NULL)
            sum += dfs(root->left, true);
        if (root->right != NULL)
            sum += dfs(root->right, false);
        return sum;
    }
    int sumOfLeftLeaves(TreeNode *root)
    {
        if (root == NULL)
            return 0;
        return dfs(root, false);
    }
};