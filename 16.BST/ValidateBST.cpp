class Solution {
public:
    bool helper(TreeNode* root, TreeNode* min, TreeNode* max){
        //BaseCase
        if(root==NULL) return true;

        if(min!=NULL && min->val>=root->val) return false;

        if(max!=NULL && max->val<=root->val) return false;

      return  helper(root->left,min,root) && helper(root->right,root,max);

        
    }
    bool isValidBST(TreeNode* root) {
        return helper (root,NULL,NULL);
    }
};