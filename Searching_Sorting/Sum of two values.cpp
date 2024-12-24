#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n,target;
    cin>>n>>target;
    vector<pair<ll,ll>>v;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        v.push_back({x,i});
    }

    sort(v.begin(),v.end());
    ll i=0,j=n-1;
    ll flag=0;
    while(i<j){
        if(v[i].first+v[j].first==target){
            flag=1;
            break;
        }
        else if(v[i].first+v[j].first<target){
            i++;
        }
        else j--;

    }
    if(flag) cout<<min(v[i].second+1,v[j].second+1)<<" "<<max(v[j].second+1,v[i].second+1);
    else cout<<"IMPOSSIBLE";

    
}

int main(){
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}