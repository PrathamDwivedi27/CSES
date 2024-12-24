#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int mod=1e9+7;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

        vector<int>temp;
        temp.push_back(a[0]);
        
        for(int i=1;i<n;i++){
            if(temp.back()<a[i]){
                temp.push_back(a[i]);
            }
            else {
                int index=lower_bound(temp.begin(),temp.end(),a[i])-temp.begin();
                temp[index]=a[i];
            }
        }
        cout<<temp.size()<<endl;
}

int main(){
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}