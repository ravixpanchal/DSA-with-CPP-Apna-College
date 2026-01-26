#include<iostream>
using namespace std;

void func(){
   static int x=10;
    cout<<"x: "<<x<<endl;
    x++;
}

int main (){
    func();
    func();
    func();
    
    return 0;
}