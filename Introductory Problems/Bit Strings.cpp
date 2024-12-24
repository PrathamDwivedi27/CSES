#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll mod= 1e9+7;
ll power(ll base, ll expo) {
    ll result = 1;
    base = base % mod;
    while (expo) {
        if (expo % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        expo /= 2;
    }
    return result;
}

void solve(){
    ll n;
    cin>>n;
    cout<<power(2,n)%mod<<endl;


}

int main(){
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}