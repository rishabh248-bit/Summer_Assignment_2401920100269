class Solution {
public:
    TreeNode* solve(vector<int>& pre, int ps, int pe,vector<int>& in, int is, 
    int ie){
        if(ps > pe || is > ie) return NULL;
        TreeNode* root = new TreeNode(pre[ps]);

        int idx = is;
        while(in[idx] != pre[ps]) idx++;

        int leftSize = idx - is;
        root->left = solve(pre,ps + 1,ps + leftSize,in,is,idx - 1);
        root->right = solve(pre,ps + leftSize + 1,pe,in,idx + 1,ie);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return solve(preorder, 0, preorder.size()-1,inorder, 0, inorder.size()-1);
    }
};
