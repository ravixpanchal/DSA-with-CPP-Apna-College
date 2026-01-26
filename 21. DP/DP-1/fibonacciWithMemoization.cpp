#include<iostream>
#include<vector>
using namespace std;

int fibDP(int n,vector<int>&f)
{
if(n==0 || n==1)
{
    return n;
}
if(f[n]!=-1)
{
    return f[n];
}
f[n]=fibDP(n-1,f)+fibDP(n-2,f);
return f[n];
}

int main ()
{
    int n=6;
    vector<int>f(n+1,-1);
     
}