#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n;
    cin>>n;
    set<ll>set;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        set.insert(x);
    }
    cout<<set.size();
}

int main(){
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}