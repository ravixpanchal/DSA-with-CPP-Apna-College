#include<iostream>
#include<queue>
#include<vector>
using namespace std;


int main (){
    priority_queue<int,vector<int>,greater<int>>pq;
    pq.push(10);
    pq.push(30);
    pq.push(20);
    pq.push(50);
    pq.push(40);

    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
    
    return 0;
}