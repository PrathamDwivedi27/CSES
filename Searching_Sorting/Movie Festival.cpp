#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n;
    cin>>n;
    vector<pair<ll,ll>>v;
    for(ll i=0;i<n;i++){
        ll a,b;
        cin>>a>>b;
        v.push_back({a,b});
        // v.push_back({b,-1});
    }
    sort(v.begin(),v.end(),[](pair<ll,ll>a,pair<ll,ll>b){
        return a.second<b.second;
    });

    ll count=0;
    ll finish_time=0;

    for(auto it:v){
        ll starting=it.first;
        ll ending=it.second;

        if(starting>=finish_time){
            count++;
            finish_time=ending;
        }

    }
    cout<<count<<endl;
    



}

int main(){
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}