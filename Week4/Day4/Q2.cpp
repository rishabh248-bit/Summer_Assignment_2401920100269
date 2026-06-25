class Solution {
public:
    int maxD;
    int height(TreeNode* node) {
        if(node == NULL) return 0;

        int lH = height(node->left);
        int rH = height(node->right);
        maxD = max(maxD, lH + rH);
        return 1 + max(lH, rH);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        maxD = 0;
        height(root);
        return maxD;
    }
};
