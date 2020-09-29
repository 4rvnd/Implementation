#include <bits/stdc++.h>
#define ll long long

using namespace std;

// solution global variables
ll n, m;

ll solve() {
    cin >> n;
    vector<ll> v;
    fflush(stdin);
    ll cnt0, cnt1;
    for (ll i=0; i<n; i++) {
        ll temp;
        cin >> temp;
        if (temp == 1) cnt1++;
        else cnt0++;
        v.push_back(temp);
        cout << v[i];
    }
    if (cnt1 <= n/2) {
        
    }
    cout << endl;
    return 0;
}

int main() {
    //
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t-- > 0) solve();
    return 0;
}
