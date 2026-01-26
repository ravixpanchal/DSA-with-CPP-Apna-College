#include<iostream>
#include<vector>
using namespace std;

int catalansTab(int n)
{
    vector<int>dp(n+1,0);
   dp[0]=dp[1]=1;

   for(int i=2;i<=n;i++){
    for(int j=0;j<i;j++){
        dp[i]+=dp[j]*dp[i-j-1];
    }
   }
   return dp[n];
}


int main()
{
    int n=6;
   
for(int i=0;i<=n;i++){
    cout<<catalansTab(i)<<" ";
}
cout<<endl;


    return 0;
}