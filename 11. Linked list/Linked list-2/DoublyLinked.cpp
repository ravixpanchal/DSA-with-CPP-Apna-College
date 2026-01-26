#include<iostream>
using namespace std;

class Node{
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data=val;
        prev=next=NULL;
    }
};

class DoublyList{
    public:
    Node* head;
    Node* tail;

    DoublyList(){
        head=tail=NULL;
    }


};

int main (){
    DoublyList dbll;



    return 0;
}