#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool check(vector<ll> &v,ll k,ll mid,ll n ){
    ll sum=0;
    ll count=1;
    for(int i=0;i<n;i++){
        sum+=v[i];
        if(sum>mid){
            sum=v[i];
            count++;
        }
    }
    return count<=k;
}

void solve(){
    ll n,k;
    cin>>n>>k;
    vector<ll> v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    ll mini=*max_element(v.begin(),v.end());
    ll maxi=accumulate(v.begin(),v.end(),0ll);
    ll ans=maxi;
    while(mini<=maxi){
        ll mid=mini+(maxi-mini)/2;
        if(check(v,k,mid,n)){
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