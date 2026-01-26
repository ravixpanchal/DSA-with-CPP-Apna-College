// #include<iostream>
// using namespace std;

// class Parent{
//     public:
//     void show(){
//         cout<<"parent class show...\n";
//     }
// };

//     class Child: public Parent{
//         public:
//     void show(){
//         cout<<"child class show....\n";
//     }
//     };


// int main (){
//     Child c1;
//     c1.show();



//     return 0;
// }


// #include<iostream>
// using namespace std;

// class Shape{
//     public:
//     virtual void draw()=0;//abstract function or pure virtual function

// } ;
// class Circle:public Shape{
//     public:
//     void draw(){
//         cout<<"draw circle\n";
//     }

// };

// class Square:public Shape{
//     public:
//     void draw(){
//         cout<<"draw square\n";
//     }

// };


// int main (){
// Circle cir1;
// cir1.draw();

// Square sqr1;
// sqr1.draw();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Example{
//     public:
//     Example(){
//     cout<<"constructor ...\n";
// }

// ~Example (){
//     cout<<"destructor....\n";
// }


// };




// int main (){
//    int a=0;
//    if(a==0){
//     static Example sg1;
//    } 

//   cout<<"code ending.......\n";
 




//     return 0;
// }

// #include<iostream>
// using namespace std;

// class A{
//     string secret="secret data";
//     friend class B;  
//     friend void revealSecret(A &obj)
// };

// class B{
//     public:
//     void showSecret(A &obj){
//         cout<<obj.secret<<endl;
//     }
// };

// int main (){
//     A a1;
//     B b1;
//     b1.showSecret(a1);

//     return 0;
// }


#include<iostream>
using namespace std;
class A{
    public:
    virtual void show(){cout<<"A";}

};

class B:public A{
    public:
    void show(){cout<<"B";}

};


int main (){
    A* a=new B();
    a->show();

    return 0;
}