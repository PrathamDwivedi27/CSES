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

    // DP table to store the number of ways to make every sum from 0 to sum using the first i coins
    vector<vector<int>> dp(n, vector<int>(sum + 1, 0));

    // Base case: There's exactly 1 way to make sum 0 (by selecting no coins)
    for(int i = 0; i < n; i++) {
        dp[i][0] = 1;
    }

    // Base case for the first coin
    for(int target = 0; target <= sum; target++) {
        if(target % nums[0] == 0) {
            dp[0][target] = 1;
        }
    }

    // Fill the DP table
    for(int index = 1; index < n; index++) {
        for(int target = 0; target <= sum; target++) {
            // Exclude the current coin
            int exclude = dp[index-1][target];
            
            // Include the current coin (if the coin value is <= target)
            int include = 0;
            if(nums[index] <= target) {
                include = dp[index][target - nums[index]];
            }

            // Total number of ways is the sum of including and excluding the current coin
            dp[index][target] = (exclude + include) % mod;
        }
    }

    // The answer is the number of ways to form the sum using all n coins
    cout << dp[n-1][sum] << endl;
}

int main() {
    int t = 1;
    // cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
