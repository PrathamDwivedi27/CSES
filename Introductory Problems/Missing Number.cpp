#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n;
    cin>>n;
    vector<ll>v(n-1);
    for(ll i=0;i<n-1;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    ll xori=0;
    for(ll i=0;i<n-1;i++){
        xori^=v[i];
    }
    ll xori1=0;
    for(ll i=1;i<=n;i++){
        xori1^=i;
    }
    cout<<(xori^xori1)<<endl;
}

int main(){
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}