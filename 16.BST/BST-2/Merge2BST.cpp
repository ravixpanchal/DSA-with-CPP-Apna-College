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
        this->left=left;
        this->right=right;
    }
};

void getInorder(Node* root,vector<int>&nodes){
    if(root==NULL){
        return;
    }

    getInorder(root->left,nodes);
    nodes.push_back(root->data);
    getInorder(root->right,nodes);
}

Node* BSTFromSortedVec(vector<int>arr,int st,int end){
    if(st>end){
        return NULL;
    }

    int mid=st+(end-st)/2;
    Node* currNode= new Node(arr[mid]);

    currNode->left=BSTFromSortedVec(arr,st,mid-1);
    currNode->right=BSTFromSortedVec(arr,mid+1,end);

    return currNode;
}

Node* mergeBST(Node* root1,Node* root2){
    vector<int>nodes1;
    vector<int>nodes2;
    vector<int>merged;

    //sort bst1
    getInorder(root1,nodes1);
    
    //sort bst2
    getInorder(root2,nodes2);

    int i=0,j=0;

    while(i<nodes1.size() && j<nodes2.size()){
        if(nodes1[i]<nodes2[j]){
            merged.push_back(nodes1[i++]);
        }
        else{
            merged.push_back(nodes2[j++]);
        }
    }

    while(i<nodes1.size()){
        merged.push_back(nodes1[i++]);
    }
    
    while(j<nodes2.size()){
        merged.push_back(nodes2[j++]);
    }
 

    return BSTFromSortedVec(merged,0,merged.size()-1);



}

int main (){


    return 0;
}