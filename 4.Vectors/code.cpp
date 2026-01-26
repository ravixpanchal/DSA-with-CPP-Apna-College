#include<iostream>
#include<vector>
using namespace std;

int main (){
    // vector<vector<int>>matrix={{1,2,3},{4,5},{6}};
    // for(int i=0;i<matrix.size();i++){
    //     for(int j=0;j<matrix[i].size();j++){
    //         cout<<matrix[i][j]<<" ";

    //     }
    //     cout<<endl;

    // }

    vector<int>v;
    for(int i=0;i<5;i++){
        v.push_back(i);

    }
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
  return 0;
}