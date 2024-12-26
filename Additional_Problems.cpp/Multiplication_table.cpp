#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n;
    cin>>n;

    ll low=1,high=n*n;
    ll ans=0;
    while(low<=high){
        ll mid=low+(high-low)/2;
        
        ll count=0;
        for(int i=1;i<=n;i++){      //hum row se divide kar rhe hai jisse direct pta lag ja rha hai ki kitne number usse chote honge jaise agar mid 5 aaya aur 2 se divide kiye 5/2=2 matlab 2 aur 4 chote honge direct 
            count+=min(n,(mid/i));  //jaise mid 5 aaya 5/1 kiya to 5 aagya lekin table n=3 ka hai to 3 hi plush hona chaiye na ussi liye
        }
        if(count>=(n*n+1)/2) {
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;

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