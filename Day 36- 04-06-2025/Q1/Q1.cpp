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
    void dfs(TreeNode *root, int &sum, int num)
    {
        if (root == NULL)
            return;
        num = num * 10 + root->val;
        if (root->left == NULL && root->right == NULL)
        {
            sum = sum + num;
            return;
        }
        dfs(root->left, sum, num);
        dfs(root->right, sum, num);
        return;
    }
    int sumNumbers(TreeNode *root)
    {
        int sum = 0, num = 0;
        dfs(root, sum, num);
        return sum;
    }
};