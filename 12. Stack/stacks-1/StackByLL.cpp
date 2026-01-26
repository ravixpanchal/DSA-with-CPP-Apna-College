#include<iostream>
#include<vector>
#include<list>
using namespace std;

template<class T>

// class Node{
//     T data;
//     Node* next;
// public:
    
//     Node(T val){
//         data=val;
//         next=NULL;
//     }

// };

class Stack{
    //   Node* head;

public:
// Stack(){
//     head==NULL;
// }
    
    //push
    void push(T val){
        ll.push_front(val);
        // Node* newNode=new Node(val);
        // if(head==NULL){
        //     head=newNode;
        // }
    }

    //pop
    void pop(){
        ll.pop_front();
    }

    //Top
    T top(){
        return ll.front();
    }

    //isEmpty
    bool isEmpty(){
        return ll.size()==0;
    }



};


int main (){
    Stack<int>s;

    s.push(3);
    s.push(2);
    s.push(1);
    //1->2->3

    while(!s.isEmpty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;




    return 0;
}



