class Solution {
public:
    void solve(TreeNode* root, int &sum, int check){
        if(root==NULL){
            return;
        }
        if(root->left==NULL && root->right==NULL && check==1){
            sum+= root->val;
            return;
        }
        solve(root->left, sum, 1);
        solve(root->right, sum, 0);
    }
    
    int sumOfLeftLeaves(TreeNode* root) {
        if(root==NULL) return 0;
        int sum = 0;
        solve(root, sum, 0);
        return sum;
    }
};
