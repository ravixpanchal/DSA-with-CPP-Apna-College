#include<iostream>
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

class Info{
    public:
    bool isBST;
    int min;
    int max;
    int size;

    Info(bool isBST,int min,int max,int size){
        this->isBST=isBST;
        this->min=min;
        this->max=max;
        this->size=size;
    }
};

static int maxSize;

Info* largestBST(Node* root){
    //bst
    if(root==NULL){
       return new Info(true,INT_MIN,INT_MAX,0);
     }

    //  if(root==NULL){
    //     return NULL;
    //  }

    //  if(root->left==NULL && root->data==NULL){
    //   return  new Info(true,root->data,root->data,1);
    //  }

    Info* leftInfo=largestBST(root->left);
    Info* rightInfo=largestBST(root->right);

    int currMin=min(root->data,min(leftInfo->min,rightInfo->min));
    int currMax=max(root->data,max(leftInfo->max,rightInfo->max));
    int currSize=leftInfo->size+rightInfo->size+1;

    if(leftInfo->isBST && rightInfo->isBST && root->data>leftInfo->max && root->data<rightInfo->min){
        //check max size
        maxSize=max(maxSize,currSize);
        return new Info(true,currMin,currMax,currSize);
    }
    return new Info(false,currMin,currMax,currSize);


}


int main (){




    return 0;
}