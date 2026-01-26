// #include<iostream>
// using namespace std;

// class Student {
//     string name;
//     float cgpa;

//     //methods
//     void getPercentage(){
//         cout<<(cgpa*10)<<"%\n";
//     }

//     void deactivate(){
//         cout<<"Deleting account"<<"\n";
//     }

//     void editBio(string newBio){
//         bio=newBio;
//     }

// class User{
//     int id;
//     string username;
//     string bio;
//     string password;


// }

// };

// int main (){
//     Student s1;
//     cout<<sizeof(s1)<<endl;
//     Student s2;
//     cout<<sizeof(s2)<<endl;




//     return 0;
// }


// #include<iostream>
// #include<string>
// using namespace std;

// class Student{
//     string name;
//     float cgpa;

//     public:

//     void getPercentage(){
//         cout<<(cgpa*10)<<"%\n";

//     }
    
//     //setters
//     void setName(string nameVal){
//         name=nameVal;
//     }

//     void setCgpa(float cgpaVal){
//         cgpa=cgpaVal;
//     }

//     //getters
//     string getName(){
//         return name;
//     }

//     float getCgpa(){
//         return cgpa;
//     }

// };
// int main (){
//     Student s1;

//     s1.setName("BABA");
//     s1.setCgpa(8.28);

//     cout<<s1.getName()<<endl;
//     cout<<s1.getCgpa()<<endl;



//     return 0;
// }


// #include<iostream>
// using namespace std;

// class Car{
//     string name;
//     string colour;

// public:

//    Car(string nameVal,string colourVal){
//     cout<<"constructor is called,obejct being created...\n";
//     this->name=name; // *(this).name=name;

//     this->colour=colour;//*(this).colour=colour;
//    }
// // void start(){
// //     cout<<"car has started.....\n";
// // }

// // void stop(){
// //     cout<<"car has stopeed.....\n";
// // }


// //getters
// string getName(){
//     return name;
// }

// string getColour(){  
//     return colour;
// }
// };


// int main (){
//     Car c1("Thar","SkyBlue");
//     cout<<"car name :"<<c1.getName()<<endl;
//     cout<<"car's colour is:"<<c1.getColour()<<endl;

//     Car c2("Fortuner","Pink");




//     return 0;
// }


// #include<iostream>
// #include<string>
// using namespace std;

// class Car{
//     public:
//     string name;
//     string color;

//     Car(string name,string color){
//         this->name=name;
//         this->color=color;

//     }

//     Car(Car &original){
//         cout<<"copying original to new ...\n";
//         name=original.name;
//         color=original.color;
//     }

// };




// int main (){
//     Car c1("Thar","Blue");
//     Car c2(c1);
//     cout<<c2.name<<endl;
//     cout<<c2.color<<endl;


//     return 0;
// }


// #include<iostream>
// #include<string>
// using namespace std;

// class Animal{
//     public:
//     void eat(){
//         cout<<"eats\n";
//     }
//     void breath(){
//         cout<<"breaths\n";
//     }


// };

// class Mammal: public Animal{
//     public:
//     string bloodtype;
//     Mammal(){
//         bloodtype="worm";
//     }

// };

// class Dog: public Mammal{
//     public:
//    void tail(){
//         cout<<"a dog wags it's tail\n";
//     }


// };


// int main (){

//    Dog d1;
//    d1.eat();
//    d1.breath();
//    d1.tail();
//    cout<<d1.bloodtype<<endl;


//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;

// class Teacher{
//     public:
//     int salary;
//     string subject;

// };

// class Student{
//     public:
//     int roll_no;
//     float cgpa;

// };

// class TA: public Teacher, public Student{
//     public:
//     string name;


// };



// int main (){
//     TA ta1;
//     ta1.name="RAVI PANCHAL";
//     ta1.subject="MAthematics";
//     ta1.cgpa=8.28;

//     cout<<ta1.name<<endl;
//     cout<<ta1.subject<<endl;
//     cout<<ta1.cgpa <<endl;


//     return 0;
// }

#include<iostream>
using namespace std;

class Animal{
    public:
    void eat(){
        cout<<"eats\n";
    }

    void breath(){
        cout<<"breath\n";
    }
};

class Bird:public Animal{
    public:


};

class Fish:public Animal{
    public:


};

class Mammal: public Animal{
    public:


};

int main (){


    return 0;
}