class Solution {
public:
    bool validate(TreeNode* node, long long mini, long long maxi) {
        if(node == NULL) return true;
        if(node->val <= mini || node->val >= maxi) return false;

        return validate(node->left, mini, node->val) && 
               validate(node->right, node->val, maxi);
    }
    bool isValidBST(TreeNode* root) {
        return validate(root, LLONG_MIN, LLONG_MAX);
    }
};
