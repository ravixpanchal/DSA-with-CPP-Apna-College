#include<iostream>
#include<string>
using namespace std;

class Student{
  public: 
         string name;
         double *cgpaPtr;


         //Constructor
         Student(string name,double cgpa){
          this->name=name;
         cgpaPtr=new double;
         *cgpaPtr=cgpa;
         }

        //  //Shallow Constructor
        //  Student(Student &obj){
        //   this->name=obj.name;
        //   cgpaPtr=new double;
        //   *cgpaPtr=*obj.cgpaPtr;
        //  }

  ~Student(){
    cout<<"Hi, I delete everything!";
    delete cgpaPtr;
  }

  void getInfo(){
    cout<<"Name: "<<name<<endl;
    cout<<"CGPA: "<<*cgpaPtr<<endl;
  }





};

int main(){
  Student s1 ("Ravi",8.33);
//  Student s2(s1);
//  s1.getInfo();
//  s2.name="CP";
//  *(s2.cgpaPtr)=8.5;
//  s2.getInfo();
s1.getInfo();
s1.getInfo();


    return 0;
}