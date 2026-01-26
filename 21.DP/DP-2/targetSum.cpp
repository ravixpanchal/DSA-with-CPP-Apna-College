#include<iostream>
#include<vector>
using namespace std;

bool targetSum(vector<int>nums,int target)
{
    int n=nums.size();

    //create dp array
    vector<vector<int>>dp(n+1,vector<int>(target+1,0));

    for(int i=1;i<n+1;i++){
        for(int j=1;j<target+1;j++){
            //valid
            if(nums[i-1]<=j){
                //include
                dp[i][j]=max(nums[i-1]+dp[i-1][j-nums[i-1]],dp[i-1][j]);
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }

    //print the tabulation dp
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=target;j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    return dp[n][target]==target;

     
}


int main(){

vector<int>nums={4,2,7,1,3};
int target=25;

cout<<targetSum(nums,target)<<endl;




    return 0;
}