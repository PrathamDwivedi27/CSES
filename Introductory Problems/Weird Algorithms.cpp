#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n;
    cin>>n;
    cout<<n<<" ";
    while(n!=1){
        if(n%2==0){
            n=n/2;
            cout<<n<<" ";
        }
        else{
            n=n*3+1;
            cout<<n<<" ";
        } 
    }
}

int main(){
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}