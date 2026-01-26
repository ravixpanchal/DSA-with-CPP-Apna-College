#include<iostream>
#include<vector>

using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;


    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }

};

Node* insert(Node* root,int val){//O(logn)
    if(root==NULL){
        root=new Node(val);
        return root;
    }

    if(val<root->data){
        //left Subtree
      root->left=insert(root->left,val);

    }

    else{
        //right Subtree
        root->right=insert(root->right,val);
    }
    return root;
    
}





Node* bulidBST(int arr[],int n){
    Node* root=NULL;
    for(int i=0;i<n;i++){//n times
        root=insert(root,arr[i]);
    }
    return root;
}


void inorderTraversal(Node* root){
    if(root==NULL){
        return;
    }

    inorderTraversal(root->left);
    cout<<(root->data)<<" ";
    inorderTraversal(root->right);

}

bool isSearch(Node* root,int key){//boolean Search Function
    if(root==NULL){
        return false;
    }

    if(root->data==key){
        return true;
    }

    if(root->data<key){
        return isSearch(root->right,key);//right SubTree
    }
    else{
        return isSearch(root->left,key);//left Subtree
    }


}

 Node* getInorderSuccessor(Node* root){
    while(root->left!=NULL){
        root=root->left;
    }
    return root;
 }

Node* delNode(Node* root,int val){
    if(root==NULL){
        return NULL;
    }

    if(val<root->data){//left Subtree 
    root->left=delNode(root->left,val);

    }
    else if(val>root->data){//right Subtree
        root->right=delNode(root->right,val);
    }

    else{
        //case1 : 0 children
        //leaf node
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }

        //case 2: one child 
        if(root->left==NULL || root->right==NULL){
            return root->left==NULL ? root->right: root->left;

         }

         //case 3: two child
         Node* IS= getInorderSuccessor(root->right);
         root->data=IS->data;
         root->right=delNode(root->right,IS->data);
         return root;


    }
    return root;
    
}

void printInRange(Node* root,int start,int end){
    //baseCase
    if(root==NULL){
        return;
    }
    if(start<=root->data && root->data<=end){
      
        printInRange(root->left,start,end);
          cout<<root->data<<" ";
        printInRange(root->right,start,end);
    }
    else if(root->data<start){
        printInRange(root->right,start,end);
    }
    else{
        printInRange(root->left,start,end);
    }

}

bool validateHelper(Node* root,Node* min,Node* max){
    if(root==NULL){
        return true;
    }

if(min!=NULL && root->data<min->data){
    return false;
}
if(max!=NULL && root->data>max->data){
    return false;
}

return validateHelper(root->left,min,root) && validateHelper(root->right,root,max);



}

bool validateBST(Node* root){
    return validateHelper(root,NULL,NULL);
}

int main (){
   int arr[9]={8,5,3,1,4,6,10,11,14};

   Node* root= bulidBST(arr,9);
  printInRange(root,5,12);
  cout<<endl;
   




    return 0;
}