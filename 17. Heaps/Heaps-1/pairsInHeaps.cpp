#include<iostream>
#include<queue>
using namespace std;


class Student{
    public:
    string name;
    int marks;

    Student(string name,int marks)
    {
        this->name=name;
        this->marks=marks;

    }

    //operator overloading



};


int main ()
{

    priority_queue<pair<string,int>>pq; //default-max heap
    pq.push(make_pair("Ravi",90));
    pq.push(make_pair("Vikas",98));
    pq.push(make_pair("Ajendra",88));

    while(!pq.empty())
    {
        cout<<"Top: "<<pq.top().first<<" , "<<pq.top().second<<endl;
        pq.pop();
    }



    return 0;
}