#include<iostream>
#include<map>
#include<string>
using namespace std;

int main (){
    map<int,string>m;

    m[101]="Ravi";
    m[102]="Vikas";
    m[103]="Vishal";
    m[104]="Vikas";

  for(auto it: m){
    cout<<"keys = "<<it.first<<" "<<"value = "<<it.second<<endl;
  }
   

    



    return 0;
}