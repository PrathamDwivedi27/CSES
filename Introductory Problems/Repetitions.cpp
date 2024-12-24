#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    string s;
    cin>>s;
    ll n=s.size();
    ll count =1;
    ll maxi=1;
    for(ll i=0;i<n-1;i++){
        if(s[i]==s[i+1]) count++;
        else{
            
            count=1;
        }
        maxi=max(count,maxi);
    }
    cout<<maxi<<endl;
}

int main(){
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}