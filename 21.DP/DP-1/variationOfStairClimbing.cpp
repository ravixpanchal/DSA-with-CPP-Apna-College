#include<iostream>
#include<vector>
using namespace std;

int countWays(int n) //1 ,2,3 jumps are allowed
{
    vector<int>dp(n+1,0);
    dp[0]=1;
    dp[1]=1;
    dp[2]=2;

    for(int i=3;i<=n;i++)
    {
        dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
    }

    return dp[n];
}

int main()
{

int n=4;
cout<<countWays(n)<<endl;
return 0;
}