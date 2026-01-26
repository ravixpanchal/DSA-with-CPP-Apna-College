#include<iostream>
using namespace std;


int catalansNum(int n)
{
    int ans=0;
    //base case
    if(n==0 || n==1)
    {
        return 1;
    }

   for(int i=0;i<n;i++)
   {
    ans+=catalansNum(i)*catalansNum(n-i-1);
   }

   return ans;
}


int main()
{
    int n=4;
    for(int i=0;i<=6;i++)
    {
cout<<catalansNum(i)<<" ";
    }
    cout<<endl;





    return 0;
}