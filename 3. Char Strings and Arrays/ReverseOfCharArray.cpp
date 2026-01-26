#include<iostream>
#include<cstring>
using namespace std;

void reverseArr(char str[],int n){
    int st=0,end=n-1;
    while(st<end){
        swap(str[st],str[end]);
        st++;
        end--;
    }
    cout<<endl;

}

int main (){
    char str[]="Atul";
    reverseArr(str,strlen(str));
    cout<<"reverse = "<<str<<endl;



    return 0;
}