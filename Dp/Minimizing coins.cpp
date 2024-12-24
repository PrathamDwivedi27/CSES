#include <bits/stdc++.h>
using namespace std;

// int noOfWaysToMakeSum(int index,int amount,vector<vector<int>>&dp,vector<int>&nums){
//     //base case
//     // if(index<0) return 0;
//     if(index==0){
//         if(amount%nums[0]==0) return amount/nums[0];
//         else return 0;
//     }
    
//     if(dp[index][amount]!=-1) return dp[index][amount];
    
//     //if you are not taking that number
//     int exclude=noOfWaysToMakeSum(index-1,amount,dp,nums);
    
//     //if you are including it
//     int include=1e9;
//     if(nums[index]<=amount){
//         include=1+noOfWaysToMakeSum(index,amount-nums[index],dp,nums);
//     }
    
//     return dp[index][amount]=min(include,exclude);

// }



int main(){
    
    int n,sum;
    cin>>n>>sum;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<vector<int>>dp(n,vector<int>(sum+1,1e9));

    for(int target=0;target<=sum;target++){
        if(target%nums[0]==0){
            dp[0][target]=target/nums[0];
        }
    }

    for(int index=1;index<n;index++){
        for(int target=0;target<=sum;target++){
            //exclude
            int exclude=dp[index-1][target];

            //include
            int include=1e9;
            if(nums[index]<=target){
                include=1+dp[index][target-nums[index]];
            }

            dp[index][target]=min(include,exclude);
        }
    }

    if(dp[n-1][sum]>=1e9) cout<<-1<<endl;
    else cout<<dp[n-1][sum]<<endl;
    

    return 0;
}