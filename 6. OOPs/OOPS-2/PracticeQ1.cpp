#include<iostream>
using namespace std;

class A{
    public:
    A(){
        std::cout<<"constructor A"<<std::endl;
    }

    ~A(){std::cout<<"Destructor A"<<std::endl;}

};

class B:public A{
    public:
    B(){std::cout<<"Constructor B"<<std::endl;}
    ~B(){std::cout<<"Destructor B"<<std::endl;}
};
int main (){
    B obj;

    return 0;
}