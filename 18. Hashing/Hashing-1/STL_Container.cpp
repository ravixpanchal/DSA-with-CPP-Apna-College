#include<iostream>

#include<map>
using namespace std;


int main(){
    map<string,int>m;
    m["China"]=150;
    m["India"]=200;
    m["Pakistan"]=150;
    m["Nepal"]=20;

    cout<<m["India"]<<endl;

    for(pair<string,int>country:m)
    {
        cout<<country.first<<","<<country.second<<endl;
    }

    if(m.count("USA")){
        cout<<"USA Exists!";
    }else{
        cout<<"USA doesn't exists!";
    }




    return 0;
}