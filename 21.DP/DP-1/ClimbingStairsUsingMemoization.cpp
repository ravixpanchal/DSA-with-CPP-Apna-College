#include<iostream>
#include<vector>
using namespace std;

int countWays(int n,vector<int>&f)
{
//Basecase
if(n==0 || n==1)
{
    return 1;
}

if(f[n]!=-1)
{
    return f[n];
}

return countWays(n-1,f)+countWays(n-2,f);
}

int main()
{
int n=4;
vector<int>f(n+1,-1);

cout<<countWays(n,f)<<endl;



    return 0;
}