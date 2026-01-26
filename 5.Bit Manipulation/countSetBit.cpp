#include<iostream>
using namespace std;

int countSetBit(int num){
    int count=0;

    while(num>0){
        int lastDigit=num&1;
        count+=lastDigit;
        num=num>>1;
    }
    cout<<count<<endl;

}

int main (){
    countSetBit(7);



    return 0;
}