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

Node* buildBSTfromSorted(int *arr,int st,int end){
    //baseCase
    if(st>end){
        return NULL;
    }
    int mid= st+(end-st)/2;
    Node* currNode=new Node(arr[mid]);
    currNode->left=buildBSTfromSorted(arr,st,mid-1);
    currNode->right=buildBSTfromSorted(arr,mid+1,end);
    return currNode;
}

void preOrder(Node* root){
    if(root==NULL){
      return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}


int main (){
    int arr[]={3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(int);

    Node* root=buildBSTfromSorted(arr,0,n-1);
    preOrder(root);
    cout<<endl; 
    return 0;
}