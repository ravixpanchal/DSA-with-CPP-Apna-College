#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;


int main(){
    vector<int>arr={1,2,3,2,1,3,1,4,3,4,5,6,3,4,5,1,2,3,3};
    unordered_map<int,int>m;//element,frequency

    for(auto num:arr ){
        m[num]++;
    }

    for(auto n:m){
        cout<<"Element: "<<n.first<<","<<"Frequency: "<<n.second<<endl;
    }
    



    return 0;
}