#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int mod=1e9+7;

void solve(){
    int n;
    cin>>n;

    vector<int>dp(n+1,1e9);     

    dp[0]=0;        //to make 0 from 0 requires 0 steps

    //logic ye hai ki har no ko 0 pahuchne mein kitna step lagega  dp[i] signifies no of steps required for i to reach 0
    for(int num=1;num<=n;num++){
        string number=to_string(num);
        for(char ch:number){
            char digit=ch-'0';          //convert to number
            if(digit!=0){                   // 0 ko ghta ke steps badhane se kya fayda
                dp[num]=min(dp[num],dp[num-digit]+1);       //min to lena padega kyunki ho sakta hai same number pe hum do alg tareeke se pahuche
            }
        }
    }
    cout<<dp[n]<<endl;
    return;
    
}

int main(){
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}