#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin >> n;
    vector<pair<ll, ll>> events;
    
    for(ll i = 0; i < n; i++) {
        ll a, b;
        cin >> a >> b;
        events.push_back({a, -1}); // Arrival
        events.push_back({b, 1});  // Departure
    }

    sort(events.begin(), events.end());
    ll curr = 0, maxi = 0;

    for(const auto &event : events) {
        if(event.second == -1) {
            curr++;
            maxi = max(maxi, curr);
        } else {
            curr--;
        }
    }
    cout << maxi << endl;
}

int main() {
    int t = 1;
    //cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
