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
        left=right=NULL;
    }
};

static int idx=-1;

Node* buildTree(vector<int>nodes){
    idx++;
    if(nodes[idx]==-1){
        return NULL;
    }
    Node* currNode=new Node(nodes[idx]);
    currNode->left=buildTree(nodes);
    currNode->right=buildTree(nodes);
    return currNode;
}

void KthHelper(Node* root,int K,int currLevel){

//BaseCase
if(root==NULL){
return;
}


 if(currLevel==K){
    cout<<root->data<<" ";
    return;
 }

 KthHelper(root->left,K,currLevel+1);//left Child
 KthHelper(root->right,K,currLevel+1);//right Child


}

void KthLevel(Node* root,int K){
KthHelper(root,K,1);
cout<<endl;
}

int main (){
    vector<int>nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root =buildTree(nodes);
KthLevel(root,3);


    return 0;
}