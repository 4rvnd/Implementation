#include <iostream>
#include <vector>
#include <bits/stdc++.h>
 
typedef long long int lli;
 
using namespace std;
 
int main() {
    lli n, mod = 1e9+7;
    cin >> n;
    lli dp[n+1];
    for(lli i=0; i<n+1; ++i) {
        dp[i] = 1e6;
    }
    dp[0] = 0;
    for(lli i=0; i<=n; ++i) {
        for(auto c : to_string(i)) {               // IMP
            dp[i] = min(dp[i], dp[i-(c-'0')] + 1); // IMP
        }
    }
    cout << dp[n];
    return 0;
}