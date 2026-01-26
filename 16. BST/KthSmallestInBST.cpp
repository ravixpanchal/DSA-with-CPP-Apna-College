class Solution {
public:

    int preOrder=0;

    int kthSmallest(TreeNode* root, int k) {
       //Base Case
       if(root==NULL) return -1;

       //root->left
       if(root->left!=NULL){
        int leftAns=kthSmallest(root->left,k);
        if(leftAns!=-1){
            return leftAns;
        }
       }

       //root
       if(preOrder+1==k){
        return root->val;
       }
       preOrder+=1;

       //root->right
       if(root->right!=NULL){
        int rightAns=kthSmallest(root->right,k);
        if(rightAns!=-1){
            return rightAns;
        }
       }
return -1;
        
    }
};