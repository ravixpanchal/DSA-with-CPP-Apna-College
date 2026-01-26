#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool compare(pair<int,int>p1,pair<int,int>p2){
    return p1.second<p2.second;
}

int main (){

    vector<pair<int,int>>activity(3,make_pair(0,0));
    activity[0]=make_pair(0,9);
    activity[1]=make_pair(1,2);
    activity[2]=make_pair(2,4);

    for(int i=0;i<activity.size();i++){
        cout<<"A"<<i<<":"<<activity[i].first<<" , "<<activity[i].second<<endl;
    }

    sort(activity.begin(),activity.end(),compare);


cout<<"................sort...................";
     for(int i=0;i<activity.size();i++){
        cout<<"A"<<i<<":"<<activity[i].first<<" , "<<activity[i].second<<endl;
    }




    return 0;
}