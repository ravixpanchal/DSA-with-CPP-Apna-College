#include<iostream>
using namespace std;

Node* connect(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    Node* prev=NULL;

    
    while(!q.empty()){
        Node* curr=q.front();
        q.pop();

        if(curr==NULL){
            if(q.size()==0) break;
            q.push(NULL);

        }else{
            if(curr->left!=NULL){
                q.push(curr->left);
            }

            if(curr->right!=NULL){
                q.push(curr->right);
            }

            if(prev!=NULL){
                prev->next=curr;
            }
        }
        prev=curr;
    }
    return root;

}

int main(){


    return 0;
}