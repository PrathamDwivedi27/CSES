#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool check(vector<ll> &v,ll k,ll mid,ll n ){
    ll sum=0;
    // ll count=1;
    for(int i=0;i<n;i++){
        sum+=(mid/v[i]);
    }
    return sum>=k;
}

void solve(){
    ll n,t;
    cin>>n>>t;
    vector<ll> v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    ll mini=1;
    ll maxi = t * (*min_element(v.begin(), v.end())); //The worst-case maximum time happens when the fastest machine (min(v)) produces all t items.
    ll ans=maxi;
    while(mini<=maxi){
        ll mid=mini+(maxi-mini)/2;
        if(check(v,t,mid,n)){
            ans=mid;
            maxi=mid-1;
        }
        else mini=mid+1;
    }
    cout<<ans<<endl;
    
}

int main(){
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}