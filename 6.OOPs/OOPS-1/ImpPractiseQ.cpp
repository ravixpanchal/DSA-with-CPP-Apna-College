#include<iostream>
#include<string>
using namespace std;

class User{
    int id;
    string password;

    public:
    string username;

    //parameterized constructor
    User(int id){
        this->id=id;

    }

    //setter
    void setPassword(string password){
        this->password=password;
    }
    //getter

    string getPassword(){
        return password;
    }
};

int main (){
    User user1(786);
    user1.username="BABA";
    user1.setPassword("#IITians");
    cout<<"username:"<<user1.username<<endl;
    cout<<"password:"<<user1.getPassword()<<endl;






    return 0;
}