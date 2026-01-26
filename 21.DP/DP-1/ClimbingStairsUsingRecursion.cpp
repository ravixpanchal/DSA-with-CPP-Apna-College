#include<iostream>
#include<vector>
using namespace std;


int countWays(int n)
{
    //basecase
    if(n==0 || n==1)
    {
        return 1;
    }

    return countWays(n-1)+countWays(n-2);
}



int main()
{

int n=5;
cout<<countWays(n)<<endl;


    return 0;
}