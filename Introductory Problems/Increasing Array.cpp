#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    ll moves=0;
    for(ll i=0;i<n-1;i++){
        if(v[i+1]<v[i]){
            moves+=v[i]-v[i+1];
            v[i+1]=v[i];
        }
    }
    cout<<moves<<endl;
}

int main(){
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}