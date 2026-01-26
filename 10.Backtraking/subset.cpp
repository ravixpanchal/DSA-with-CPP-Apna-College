#include<iostream>
#include<string>
using namespace std;

void strSubset(string str,string subset){
    if(str.size()==0){
        cout<<subset<<" ";
        return ;
    }
    
    //Taking Yes choice
    char ch=str[0];
    strSubset(str.substr(1,str.size()-1),subset+ch);//yes


    //No choice
    strSubset(str.substr(1,str.size()-1),subset);


}

int main (){
    string str="abc";
    string subset="";
    strSubset(str,subset);



    return 0;
}