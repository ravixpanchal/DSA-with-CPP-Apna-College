class Solution {
  public:
  int ans=0;
  int height(Node* root){
      //Base Case
      if(root==NULL) return 0;
      
      int leftHeight=height(root->left);
      int rightHeight=height(root->right);
      ans=max(ans,leftHeight+rightHeight);
      
      return max(leftHeight,rightHeight)+1;
  }
    int diameter(Node* root) {
        height(root);
        return ans;  
    }
};