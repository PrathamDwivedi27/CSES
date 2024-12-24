#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll y,x;
    cin>>y>>x;
    ll ans;
    if(y%2==0){
        y=y*y;
        ans=y+x-1;
    }
    else {
        y=(y*y)+1;
        ans=y-x+1;
    }
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}