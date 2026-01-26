#include<stdio.h>
#include<vector>
using namespace std;

vector<int>inorderTraversal(Node* root){
    vector<int>root;
    Node* curr=root;
    
    while(curr!=NULL){
        if(curr->left==NULL){
            ans.push_back(curr->data);
            curr=curr->right;
        }else{
            //Find IP(Inorder Predecessor)
            Node* IP=curr->left;
            while(IP->right!=NULL && IP->right!=curr){
                IP=IP->right;
            }

            if(IP->right==NULL){
                IP->right=curr; //create thread
                curr=curr->left;
            }else{
                IP->right==NULL; //delete thread
                ans.push_back(curr->data);
                curr=curr->right;

            }
        }
        return ans;
    }
}

int main(){



    return 0;
}