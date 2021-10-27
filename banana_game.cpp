#include<bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long ll;
 
ll theAnswer(vector<ll> price, ll budget) {
    ll n = price.size();
    ll l = 0, r = n-1, count = 0;
 
    while(l <= r) {
        ll mid = (l + r) / 2;
        if ( price[mid] <= budget ) {
            count = mid + 1;
            l = mid + 1;
        }
        else    r = mid - 1;
    }
    return count;
}
 
void cupNoodle() {
    ll t;
    vector<ll> prices;
    cin >> t;
    for(ll i=0;i<t;i++) {
        ll x;
        cin >> x;
        prices.pb(x);
    }
    sort(prices.begin(), prices.end());
    vector<ll>::iterator high;
 
    ll students;
    cin >> students;
    for(ll i=0;i<students;i++) {
        ll budget;
        cin >> budget;
        high = upper_bound(prices.begin(), prices.end(), budget);
        cout << (high - prices.begin()) << endl;
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    cupNoodle();
 
    return 0;
}