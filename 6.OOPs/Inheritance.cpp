#include<iostream>
#include<string>
using namespace std;

class Person{
    public:
    string name;
    int age;


};

class Teacher: public Person{
    public:
    string subject;

};

class Student: public Person{
    public:
    int RollNo;
  

};

int main(){
    TA t1;
    t1.name="Ravi Panchal";
    t1.age=21;
    t1.subject="Computer Science";
    t1.salary=42000;

  


    return 0;
}