#include<iostream>
#include<vector>
using namespace std;

int catalansNum(int n,vector<int>&dp)
{
if(n==0 || n==1){
    return 1;
}

if(dp[n]!=-1){
    return dp[n];
}

int ans=0;

for(int i=0;i<n;i++)
{
    ans+=catalansNum(i,dp)*catalansNum(n-i-1,dp);
}
return dp[n]=ans;
}

int main(){
    int n=5;
vector<int>dp(n+1,-1);

for(int i=0;i<n;i++){
    cout<<catalansNum(i,dp)<<" ";
}
cout<<endl;

    return 0;
}