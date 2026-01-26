#include<iostream>
#include<list>
#include<iterator>
using namespace std;

class Node{
       public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=NULL;
    }

   friend class List;
};

class List{
    public:
    Node* head;
    Node* tail;

    List(){
        tail=NULL;
        head=NULL;
    }

    void push_front(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }
        else{
            newNode->next=head;
            head=newNode;
        }
    }
    
};


void printLL(list<int>ll){
    list<int>::iterator itr;
     for(itr=ll.begin();itr!=ll.end();itr++){
        cout<<(*itr)<<" -> ";
     }
     cout<<"NULL"<<endl;

}

Node* splitAtMid(Node* head){
    Node* slow= head;
    Node* fast= head;
    Node* prev= NULL;

    while(fast!=NULL || fast->next!=NULL){
        prev=slow;
        slow=slow->next;
        fast=fast->next->next;

        if(prev!=NULL){
            prev->next=NULL;

        }
        return slow;


    }
}

Node* merge(Node* left,Node* right){
    List ans;
    Node* i=left;
    Node* j=right;

    while(i!=NULL && j!=NULL){
        if(i->data<=j->data){
            
        }
    }
}

void mergeSort(Node* head){
    if( head==NULL || head->next=NULL){
        return;

    }
    Node* rightHead= splitAtMid(head);
    mergeSort(head);//left head;
    mergeSort(rightHead);//Right head


    merge(head,rightHead);

}

int main (){
     list<int>ll;
     ll.push_back(1);
     ll.push_back(2);
     ll.push_back(3);
     ll.push_back(4);
     ll.push_back(5);

     printLL(ll);

     





    return 0;
}