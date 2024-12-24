#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n;
    cin>>n;
    if(n<=3 && n>1){
        cout<<"NO SOLUTION"<<endl;
        return;
    }
    
    for(ll i=2;i<=n;i+=2){
        cout<<i<<" ";
    }
    for(ll i=1;i<=n;i+=2){
        cout<<i<<" ";
    }
    cout<<endl;


}

int main(){
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}