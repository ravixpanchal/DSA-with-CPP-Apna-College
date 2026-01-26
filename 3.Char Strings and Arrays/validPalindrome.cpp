#include<iostream>
#include<cstring>
using namespace std;

bool isPalindrome(char str[],int n){
    int st=0,end=n-1;
    while(st<end){
        if(str[st++]!=str[end--]){
            cout<<"not valid palindrome"<<endl;
            
            return false;
        }

        }
        cout<<"valid palindrome"<<endl;
        return true;
    }



int main (){
    char str[100];
    cout<<"Enter word: ";
    cin.getline(str,100);

    int n = strlen(str);
    isPalindrome(str,n);


    


    return 0;
}