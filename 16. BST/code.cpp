#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    Node* left;
    Node* right;
    int data;

    Node(int val){
        data=val;
        left=right=NULL;

    }
};

Node* insert(Node* root,int val){
    //BaseCase
    if(root==NULL){
        return new Node(val);
    }

    if(val<root->data){
        root->left=insert(root->left,val);
    }else{
        root->right=insert(root->right,val);
    }

    return root;

}

Node* buildBST(vector<int>arr){
    Node* root=NULL;

    for(int val:arr){
     root=insert(root,val);
    }

    return root;
}

void inorder(Node* root){
    //BaseCase
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

bool search(Node* root, int key){
    //Basecase
    if(root==NULL) return false;
    if(root->data==key) return true;
    if(root->data>key){
        return search(root->left,key);
    }else{
        return search(root->right,key);
    }
}

Node* getIS(Node* root){
    while(root!=NULL && root->left!=NULL){
        root=root->left;
    }
    return root;

}
Node* delNode(Node* root,int key){
    //baseCase
    if(root==NULL) return NULL;
    if(root->data>key){
        root->left=delNode(root->left,key);
    }else if(root->data<key){
        root->right=delNode(root->right,key);
    }else{
        //key==root

       if(root->left==NULL){
        Node* temp=root->right;
        delete root;
        return temp;
       }else if (root->right==NULL){
        Node* temp=root->left;
        delete root;
        return temp;
       }else{
            
        //Case 3: Two child
        Node* IS=getIS(root->right);
        root->data=IS->data;
        root->right=delNode(root->right,IS->data);
       }



    }
    return root;
}

int main(){
    vector<int>arr={3,2,1,6,5,4};
    Node* root=buildBST(arr);
    // inorder(root);
    // cout<<search(root,3);
    cout<<"Before: ";
    inorder(root);
    cout<<endl;

    delNode(root,3);
    cout<<"After: ";
    inorder(root);
    



    return 0;
}