class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        queue<TreeNode*> q;
        q.push(root);

        bool l2r = true;

        while(!q.empty()){
            int lvlSize = q.size();
            vector<int> level(lvlSize);
            for (int i=0; i<lvlSize; i++) {
                TreeNode* node = q.front();
                q.pop();

                int idx = l2r ? i : lvlSize-1-i;
                level[idx] = node->val;
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);    
            }
            ans.push_back(level);
            l2r = !l2r;
        }
        return ans;
    }
};
