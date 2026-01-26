#include<iostream>
#include<stack>
using namespace std;

int main (){
    stack<int>s;

    s.push(3);
    s.push(2);
    s.push(1);
    //1-2-3

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();

    }
    cout<<endl;
    return 0;
}