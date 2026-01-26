#include<iostream>
#include<vector>
using namespace std;

//crete stack using vector
template<class T>
class Stack{
    vector<T>vec;

    public:
        
    void push(T val){//O(1)
            vec.push_back(val);
        }

    void pop(){//O(1)
    if(isEmpty()){
        cout<<"Stack is empty!\n";
        return;
    }
        vec.pop_back();
    }

    T top(){//O(1)
    //  if(isEmpty()){
    //     cout<<"Stack is empty!\n";
    //     return -1;
    // }
        int lastIdx=vec.size()-1;
        return vec[lastIdx];

    }

    bool isEmpty(){//O(1)
        return vec.size()==0;

    }

};




int main (){
    Stack<string> s;
    s.push("Ravi Panchal");
    s.push("am");
    s.push("I");
    s.push("Everyone");
    s.push("Hello");

    while(!s.isEmpty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;


    return 0;
}