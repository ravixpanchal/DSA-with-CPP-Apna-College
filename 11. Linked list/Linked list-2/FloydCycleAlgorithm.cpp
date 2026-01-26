#include<iostream>
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



void printList(Node* head){
    Node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;

    }
    cout<<"NULL\n";
}

bool isCycle(Node* head){
    Node* slow=head;
    Node* fast=head;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;//update by 1
        fast=fast->next->next;  //update 2
        if(slow==fast){
            cout<<"cycle exists!";
            return true;
        }
    }
    cout<<"cycle doesn't exists!";
    return false;

}


int main (){
    List ll;
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    //1->2->3->4->1
    ll.tail->next=ll.head;

    isCycle(ll.head);



    return 0;
}
