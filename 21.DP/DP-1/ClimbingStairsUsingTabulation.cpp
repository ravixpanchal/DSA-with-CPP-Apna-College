#include<iostream>
#include<vector>
using namespace std;

int countWaysTab(int n)
{
    vector<int>cwtab(n+1,0);
    cwtab[0]=1;
    cwtab[1]=1;

    for(int i=2;i<=n;i++)
    {
cwtab[i]=cwtab[i-1]+cwtab[i-2];
    }
    return cwtab[n];
}

int main()
{
int n=5;
vector<int>cwtab(n+1,0);

cout<<countWaysTab(n)<<endl;



    return 0;
}