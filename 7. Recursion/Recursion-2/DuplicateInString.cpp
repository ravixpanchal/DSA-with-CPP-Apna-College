#include<iostream>
#include<string>
using namespace std;

void removeDuplicates(string str,string ans,int i,int map[26]){
    //base case
    if(i==str.size()){
        cout<<"ans:"<<ans<<endl;
        return;
    }

    int mapIdx=(int)(str[i]-'a');

    if(map[mapIdx]==true){ //duplicate
        removeDuplicates(str,ans,i+1,map);
        
    }
    else{//not duplicates
    map[mapIdx]=true;
    removeDuplicates(str,ans+str[i],i+1,map);


    }

}

int main (){
    string str="ravipanchalkaithi";
    string ans="";
    int map[26]={false};

    removeDuplicates(str,ans,0,map);


    return 0;
}