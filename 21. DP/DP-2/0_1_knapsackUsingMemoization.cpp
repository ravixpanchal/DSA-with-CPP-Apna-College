                  //0-1 Knapsack Using Memoization Matrix
#include<iostream>
#include<vector>
using namespace std;

int knapsackMemo(vector<int>val,vector<int>wt,int W,int n,vector<vector<int>>&dp)
{
    //BaseCase
    if(n==0 || W==0)
    {
        return 0;
    }

  if(dp[n][W]!=-1)
  {
    return dp[n][W];
  }

    int itemWt=wt[n-1];
    int itemVal=val[n-1];

    if(itemWt<=W)//valid wt
    {
        //include
    int ans1=knapsackMemo(val,wt,W-itemWt,n-1,dp)+itemVal;



        //exclude
    
    int ans2=knapsackMemo(val,wt,W,n-1,dp);

    dp[n][W]= max(ans1,ans2);
    }
    else
    {

        //exclude
    
    dp[n][W]= knapsackMemo(val,wt,W,n-1,dp);
    }

    return dp[n][W];
}


int main(){

vector<int>val={15,14,10,45,30};
vector<int>wt={2,5,1,3,4};
int W=7;
int n=5;

vector<vector<int>>dp(n+1,vector<int>(W+1,-1));

cout<<knapsackMemo(val,wt,W,n,dp)<<endl;





    return 0;
}