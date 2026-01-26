#include<iostream>
#include<string>
#include<queue>
#include<vector>

using namespace std;

struct comparePair
{
    bool operator()(pair<string,int>&p1,pair<string,int>&p2){
        return p1.second<p2.second;
    }
};


int main(){
    priority_queue<pair<string,int>,vector<pair<string,int>>,comparePair>pq;
    pq.push(make_pair("Ravi",500));
    pq.push(make_pair("Rishav",1000));
    pq.push(make_pair("Ritik",100));


    while(!pq.empty()){
        cout<<pq.top().first<<","<<pq.top().second<<endl;
        pq.pop();
    }
    cout<<endl;




    return 0;
}