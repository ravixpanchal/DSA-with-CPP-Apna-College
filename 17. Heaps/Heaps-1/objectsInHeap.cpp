#include<iostream>
#include<queue>
using namespace std;

class Student
{
public:
     string name;
     int marks;

     Student(string name,int marks)
     {
        this->name=name;
        this->marks=marks;
     }

     //operator overloading

    //  bool operator<(const Student &obj) const{
    //     return this->marks<obj.marks;
    //  }

    
    //on the basis of name
     bool operator<(const Student &obj) const{
        return this->name<obj.name; //max heap
     }

};

int main ()
{
  priority_queue<Student>pq;

  pq.push(Student("Ravi",90));
  pq.push(Student("Abhinav",96));
  pq.push(Student("Rishav",92));


  while(!pq.empty())
  {
    cout<<"Top: "<<pq.top().name<<" , "<<pq.top().marks<<endl;
    pq.pop();
  }



    return 0;
}