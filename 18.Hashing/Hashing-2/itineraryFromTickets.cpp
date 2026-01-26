#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
#include<string>
using namespace std;

void printItinenary(unordered_map<string,string>tickets){
    //Starting point
    unordered_set<string>to;

    for(pair<string,string>p: tickets){
        to.insert(p.second);
    }

    string start="";
    
    for(pair<string,string>p:tickets){
         if(to.find(p.first)==to.end()){
            start=p.first;


         }
    }

    //plan print
    cout<<start<<" -> ";
    while(tickets.count(start)){
        cout<<tickets[start]<<" -> ";
        start=tickets[start];

    }
    cout<<"destination\n";
}

int main(){
    unordered_map<string,string>tickets;
    tickets["Chennai"]="Bengaluru";
    tickets["Mumbai"]="Delhi";
    tickets["Goa"]="Chennai";
    tickets["Delhi"]="Goa";

    printItinenary(tickets);





    return 0;
}