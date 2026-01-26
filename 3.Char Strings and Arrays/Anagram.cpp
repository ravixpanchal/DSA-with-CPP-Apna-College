#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool isAnagram(string str1,string str2){
    int n1=str1.length();
    int n2=str2.length();

    if(n1!=n2){
        return false;
    }

    //sort the both strings

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    for(int i=0;i<n1;i++){
        if(str1[i]!=str2[i])
        return false;
    }
    return true;
    



}

int main (){
    string str1="anagram";
    string str2="nagaram";
    cout<<isAnagram(str1,str2);




    return 0;
}