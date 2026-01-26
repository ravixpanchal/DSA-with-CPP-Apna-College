#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;


    Node(int data){
        this->data=data;
        left=right=NULL;
    }
};

static int idx=-1;

Node* buildTree(vector<int>nodes){
    idx++;
    if(nodes[idx]==-1){
        return NULL;
    }

    Node* currNode= new Node(nodes[idx]);
    currNode->left=buildTree(nodes);
    currNode->right=buildTree(nodes);
    return currNode;
}

int height(Node* root){
    if(root==NULL){
        return 0;
    }

    int leftHt=height(root->left);
    int rightHt=height(root->right);
    // return leftHt+rightHt+1;
     return  max(leftHt, rightHt) + 1;
}

int dia1(Node* root){
    if(root==NULL){
        return 0;
    }
    int currDia=height(root->left)+height(root->right)+1;
    int leftDia=dia1(root->left);
    int rightDia=dia1(root->right);

    return max(currDia,max(leftDia,rightDia));
}

pair<int,int>dia2(Node* root){
    if(root==NULL){
        return make_pair(0,0);
    }
    //diameter and height

    pair<int,int>leftInfo=dia2(root->left);
    pair<int,int>rightInfo=dia2(root->right);

    int currDia=leftInfo.second+rightInfo.second+1;
    int finalDia=max(currDia,max(leftInfo.first,rightInfo.first));
    int finalHt=max(leftInfo.second,rightInfo.second)+1;

    return make_pair(finalDia,finalHt);
}

bool isIdentical(Node* root1,Node* root2){
    //baseCase
    if(root1==NULL && root2==NULL){
        return true;
    }
    else if(root2==NULL || root1==NULL){
        return false;
    }
    if(root1->data!=root2->data){
        return false;
    }
    return isIdentical(root1->left,root2->left) && isIdentical(root1->right,root2->right);
}

bool isSubtree(Node* root,Node* subRoot){
    //baseCase
     if(root==NULL && subRoot==NULL){
        return true;
     }
     else if(root==NULL || subRoot==NULL){
        return false;
     }

    if(root->data==subRoot->data){
     //Identical for subTrees
     if(isIdentical(root,subRoot)){
        return true;
     }
    }
   int isLeftSubtree= isSubtree(root->left,subRoot);
   if(!isLeftSubtree){
     return isSubtree(root->right,subRoot);
   }
   return true;
}


int main (){
    vector<int>nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root=buildTree(nodes);

    // cout<<"dia of a tree="<<dia2(root).first<<endl;
    Node* subRoot=new Node(2);
    subRoot->left=new Node(4);
    subRoot->right=new Node(5);

    cout<<isSubtree(root,subRoot)<<endl;
    return 0;
}