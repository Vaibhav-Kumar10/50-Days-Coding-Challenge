class Solution
{
public:
    bool comapare(TreeNode *node, long minVal, long maxVal)
    {
        if (node == NULL)
            return true;
        if (node->val <= minVal || node->val >= maxVal)
            return false;
        return comapare(node->left, minVal, node->val) &&
               comapare(node->right, node->val, maxVal);
    }
    bool isValidBST(TreeNode *root) { return comapare(root, LONG_MIN, LONG_MAX); }
};
