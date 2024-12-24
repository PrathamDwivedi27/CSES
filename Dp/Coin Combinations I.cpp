#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int mod = 1e9+7;

void solve() {
    int n, sum;
    cin >> n >> sum;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int>dp(sum+1,0);
    //dp[i] no of ways to generate sum of i

    dp[0]=1;        // to generate sum of 0 there is only one way

    for(int target=1;target<=sum;target++){
        for(int index=0;index<n;index++){
            if(nums[index]<=target){
                dp[target]=(dp[target]+dp[target-nums[index]])%mod;
            }
        }
    }
    cout<<dp[sum]<<endl;
    return;
}

int main() {
    int t = 1;
    // cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
