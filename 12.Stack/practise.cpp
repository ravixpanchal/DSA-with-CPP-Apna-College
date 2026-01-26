#include<iostream>
#include<vector>
#include<list>
using namespace std;

class Stack{
    list<int>ll;

    public:

    //push
    void push(int val){
        ll.push_front(val);
    }

    //pop
    void pop(){
        ll.pop_front();
        }

    //top
    int top(){
        return ll.front();
    }

    bool isEmpty(){
        return ll.size()==0;
    }



};

int main(){

   Stack s;
   s.push(1);
   s.push(2);
   

   while(!s.isEmpty()){
    cout<<s.top()<<" ";
    s.pop();
   }




    return 0;
}