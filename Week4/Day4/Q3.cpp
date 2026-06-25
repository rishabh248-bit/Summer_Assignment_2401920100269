class Solution {
public:
    int max_sum;
    int maxPathDown(TreeNode* node) {
        if (node == NULL) return 0;

        int lsum = max(0, maxPathDown(node->left));
        int rsum = max(0, maxPathDown(node->right));
        int path_sum = node->val + lsum + rsum;
        max_sum = max(max_sum, path_sum);
        return node->val + max(lsum, rsum);
    }
    int maxPathSum(TreeNode* root) {
        max_sum = INT_MIN;
        maxPathDown(root);
        return max_sum;
    }
};
