class Solution {
  public:
    class Info{
        public:
        int max,min,size;
        
        Info(int min, int max, int size){
            this->min=min;
            this->max=max;
            this->size=size;
        }
    };
    
    
    Info helper(Node* root){
        //BaseCase
        if(root==NULL) return Info(INT_MAX,INT_MIN,0);
        
        Info left=helper(root->left);
        Info right=helper(root->right);
        
        if(root->data>left.max && root->data<right.min){
            int currMin=min(root->data,left.min);
            int currMax=max(root->data,right.max);
            int currSize=left.size+right.size+1;
            
            return Info(currMin,currMax,currSize);
        }
        return Info(INT_MIN,INT_MAX,max(left.size,right.size));
    }
    
    
    int largestBst(Node *root) {
        Info info=helper(root);
        return info.size;
        
    }
};