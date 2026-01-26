#include<iostream>
#include<vector>
#include<string>
using namespace std;

int lcsRec(string str1,string str2)
{
//BaseCase
if(str1.size()==0 || str2.size()==0)
{
    return 0;
}

    int n=str1.size();
    int m=str2.size();


    if(str1[n-1]==str2[m-1])
    {
        return 1+lcsRec(str1.substr(0,n-1),str2.substr(0,m-1));

    }
    else
    {
    int ans1= lcsRec(str1.substr(0,n-1),str2);
    int ans2=lcsRec(str1,str2.substr(0,m-1));
    return max(ans1,ans2);
    }
}

int main()
{

string str1="abcdge";
string str2="abedg";

cout<<lcsRec(str1,str2)<<endl;




    return 0;
}