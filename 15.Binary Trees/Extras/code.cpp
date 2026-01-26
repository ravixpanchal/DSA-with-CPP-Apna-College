#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=right=NULL;
    }
};

static int idx=-1;

Node* buildTree(vector<int>preOrder){
    idx++;

    //BaseCase
    if(preOrder[idx]==-1) return NULL;

    //create node
    Node* root=new Node(preOrder[idx]);

    root->left=buildTree(preOrder);       //left child
    root->right=buildTree(preOrder);

    return root;



};


//preorder Traversal
void preOrder(Node* root){
    if(root==NULL) return;

    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

//Inorder Traversal
void inOrder(Node* root){
    //baseCase
    if(root==NULL) return;

    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void postOrder(Node* root){
    if(root==NULL) return;

    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

void levelOrder(Node* root){
    queue<Node*>q;

    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* currNode=q.front();
        q.pop();

        if(currNode==NULL){
            if(!q.empty()){
                cout<<endl;
                q.push(NULL);
                continue;
            }else{
                break;
            }
        }


        cout<<currNode->data<<" ";

        if(currNode->left!=NULL){
            q.push(currNode->left);
        }

        if(currNode->right!=NULL){
            q.push(currNode->right);
        }
    }
}

    int height(Node* root){
        //BaseCase
        if(root==NULL) return 0;

        int leftHt=height(root->left);
        int rightHt=height(root->right);

        return max(leftHt,rightHt)+1;
    }

    int count(Node* root){
        //BaseCase
        if(root==NULL) return 0;

        int leftCount=count(root->left);
        int rightCount=count(root->right);

        return leftCount+rightCount+1;
    }

int sum(Node* root){
    //baseCase
    if(root==NULL) return 0;

    int leftSum=sum(root->left);
    int rightSum=sum(root->right);

    return leftSum+rightSum+root->data;
}

bool isIdentical(Node* p,Node* q) {
        //BaseCase
        if(p==NULL || q==NULL){
            return p==q;
        }

        int isleftSame=isIdentical(p->left,q->left);
        int isrightSame=isIdentical(p->right,q->right);

        return isleftSame && isrightSame && p->data==q->data;   
    }

    bool isSubtree(Node* root,Node* subRoot) {
        // BaseCase
        if (root == NULL || subRoot == NULL)
            return root == subRoot;

        if (root->data == subRoot->data && isIdentical(root, subRoot))
            return true;
        return isSubtree(root->left, subRoot) ||
               isSubtree(root->right, subRoot);
    }

    
void kthLevel(Node* root, int k){
    //BaseCase
    if(root==NULL) return;

    if(k==1){
        cout<<root->data<<" ";
        return;
    }
    kthLevel(root->left,k-1);
    kthLevel(root->right,k-1);
}


int sumtree(Node* root){
    if(root==NULL) return 0;

    int leftSum=sumtree(root->left);
    int rightSum=sumtree(root->right);
    root->data+=leftSum+rightSum;

    return root->data;
}

int maxWidthofBT(Node* root){
    queue<pair<Node*,int>>q;
    q({root,0});
    int maxWidth=0;

    while(!q.empty()){
        int currSize=q.size();

        int stIdx=q.front().second;
        int lastIdx=q.back().second;

        maxWidth=max(maxWidth,lastIdx-stIdx+1);

        for(int i=0;i<currSize;i++){
            Node* currNode=q.front();
            q.pop();


            if(currNode.first->left){
                q.push({currNode.first->left,currNode.second*2+1});
            }

            
            if(currNode.first->right){
                q.push({currNode.first->right,currNode.second*2+2});
            }
        }
        return maxWidth;

    }
}

int main(){
    vector<int>root={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* Root=buildTree(root);

//   preOrder(Root);
//   cout<<endl;
//   inOrder(Root);
//   cout<<endl;
//   postOrder(Root);
//   cout<<endl;
//   levelOrder(Root);

// cout<<height(Root)<<endl;
// cout<<"count of nodes: "<<count(Root)<<endl;

// cout<<"Sum of Nodes: "<<sum(Root)<<endl;

// kthLevel(Root,3);
sumtree(Root);
preOrder(Root);





    return 0;
}