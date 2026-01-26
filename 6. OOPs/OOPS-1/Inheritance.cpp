#include<iostream>
using namespace std;

class Animal{
    public:
    string name;
    string color;

    void eat(){
        cout<<"eats\n";
    }

    void breath(){
        cout<<"breaths\n";
    }

};

class Fish: public Animal{
    public:
    int fins;
    void swim(){
        cout<<"swims\n";
    }
};



int main (){
    Fish f1;
    f1.swim();
    f1.eat();
    f1.breath();




    return 0;
}