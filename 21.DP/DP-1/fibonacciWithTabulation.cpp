#include<iostream>
#include<vector>
using namespace std;

int fibTab(int n)
{
    vector<int>fib(n+1,0);
    fib[0]=0;
    fib[1]=1;

    for(int i=2;i<=n;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }
    return fib[n];
}

int main ()
{

int n=6;
cout<<fibTab(n)<<endl;



    return 0;
}