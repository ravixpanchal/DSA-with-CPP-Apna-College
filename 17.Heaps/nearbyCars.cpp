#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Car{
    public:
    int idx;
    int dSqr;

    Car(int idx, int dSqr){
        this->idx=idx;
        this->dSqr=dSqr;
    }
    //operator overloading
    bool operator < (const Car &obj) const{
        return this->dSqr>obj.dSqr;
    }

};

void nearbyCars(vector<pair<int,int>>pos,int k){
    vector<Car>cars;

    for(int i=0;i<pos.size();i++){
        int dSqr=pos[i].first*pos[i].first+pos[i].second*pos[i].second;
        cars.push_back(Car(i,dSqr));

    }

    priority_queue<Car>pq(cars.begin(),cars.end());

    for(int i=0;i<k;i++){
        cout<<pq.top().idx<<endl;
        pq.pop();
    }
}

int main (){
    vector<pair<int,int>>pos;
    pos.push_back(make_pair(3,3));
    pos.push_back(make_pair(5,-1));
    pos.push_back(make_pair(-2,4));
    

    nearbyCars(pos,2);
    return 0;
}