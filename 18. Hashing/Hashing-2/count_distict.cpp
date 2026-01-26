#include<iostream>
#include<vector>
#include<set>
#include<unordered_set>
#include<string>
using namespace std;

int countDistict(vector<int>arr){
unordered_set<int>s;

for(int i=0;i<arr.size();i++){
    s.insert(arr[i]);
}

return s.size();
}

int main(){
    vector<int>arr={4,3,2,5,6,7,3,4,2,1};
    cout<<countDistict(arr)<<" ";




    return 0;
}