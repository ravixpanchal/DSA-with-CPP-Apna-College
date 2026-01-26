#include<iostream>
#include<string>
using namespace std;

int vowelCount(string str){
    int vowelCount=0;
    for(int i=0;i<str.length();i++){
        if(str[i]=='a'|| str[i]=='e'|| str[i]=='i' || str[i]=='o' || str[i]=='u' ){
            vowelCount++;
        }
    }
    return vowelCount;
}

int main (){
    string str;
    getline(cin,str);
    cout<<vowelCount(str)<<endl;


    return 0;
}