#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int mod=1e9+7;

void solve(){
    string word1,word2;
    cin>>word1>>word2;

    int n=word1.size();
        int m=word2.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));     //both indexes

        for(int i=0;i<=n;i++) dp[i][0]=i;
        for(int j=1;j<=m;j++) dp[0][j]=j;

        for(int ind1=1;ind1<=n;ind1++){
            for(int ind2=1;ind2<=m;ind2++){
                if(word1[ind1-1]==word2[ind2-1]){
                    dp[ind1][ind2]=dp[ind1-1][ind2-1];
                }
                else{
                    int insertOp = dp[ind1][ind2 - 1];       // Insert 
                    int deleteOp = dp[ind1 - 1][ind2];       // Delete 
                    int replaceOp =dp[ind1-1][ind2-1];  // Replace 
                    
                    dp[ind1][ind2] = 1 + min({insertOp, deleteOp, replaceOp});
                }
            }
        }
        cout<<dp[n][m]<<endl;
    
}

int main(){
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}