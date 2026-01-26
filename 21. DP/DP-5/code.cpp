#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        next=NULL;

    }
};

class List{
    Node* head;
    Node* tail;
public:
    List(){
        head=tail=NULL;
    }

    void push_front(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
            return;
        }else{
            newNode->next=head;
            head=newNode;
        }

    }

    void printLL(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" -> ";
            temp=temp->next;
           
        }
        cout<<"NUll"<<endl;
    }

    void push_back(int val){
        Node* newNode=new Node(val);

        if(head==NULL){
            head=tail=newNode;
        }else{
           tail->next=newNode;
           tail=newNode;
        }

    }

    void pop_front(){
        if(head==NULL){
            cout<<"LL is empty\n";
            return ;
        }
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }

    void pop_back(){
        if(head==NULL){
            cout<<"LL is empty\n";
        }

        Node*temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=NULL;
        delete tail;
        tail=temp;
    }

    void insert(int val,int pos){
        if(pos<0){
            cout<<"Invalid position\n";
            return;
        }

        if(pos==0){
            push_front(val);
            return;
        }

        Node* temp=head;
        for(int i=0;i<pos-1;i++){
            temp=temp->next;
        }
        Node* newNode=new Node(val);
        newNode->next=temp->next;
        temp->next=newNode;
    }
};


int main(){
    List ll;

    ll.push_back(3);
    ll.push_back(2);
    ll.push_back(1);
    ll.push_back(4);
    ll.insert(100,2);
    

    ll.printLL();




    return 0;
}