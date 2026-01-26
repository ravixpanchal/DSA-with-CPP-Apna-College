#include<iostream>
#include<vector>
#include<stdlib.h>
using namespace std;

int getMinDiff(vector<int>nums){
    int totalSum=0;

    for(int el:nums){
        totalSum+=el;
    }


    int n=nums.size();
    int W=totalSum/2;
    vector<vector<int>>dp(n+1,vector<int>(W+1,0));

    for(int i=1;i<=n;i++){
        for(int j=1;j<=W;j++){
            if(nums[i-1]<=j){
                dp[i][j]=max(nums[i-1]+dp[i-1][j-nums[i-1]],dp[i-1][j]);
            }else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
 int group1Sum=dp[n][W];
 int  group2Sum=totalSum-group1Sum;
return abs(group1Sum-group2Sum);
}

int main(){

 vector<int>nums={1,6,11,5};
cout<<getMinDiff(nums)<<endl;


    return 0;
}