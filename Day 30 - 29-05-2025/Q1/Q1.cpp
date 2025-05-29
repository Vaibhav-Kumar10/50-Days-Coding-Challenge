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
    int dfs(TreeNode *root, int &diameter)
    {
        if (root == NULL)
            return 0;
        int lt = dfs(root->left, diameter);
        int rt = dfs(root->right, diameter);
        diameter = max(diameter, lt + rt);
        return max(lt, rt) + 1;
    }
    int diameterOfBinaryTree(TreeNode *root)
    {
        int d = 0;
        dfs(root, d);
        return d;
    }
};