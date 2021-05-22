#include <bits/stdc++.h>
#include <iostream>
#include <vector>
 
using namespace std;


int knapsackRec(int val[], int wt[], int W, int n) {
    if(W==0 or n == 0) {
        return 0;
    }
    if(wt[n-1] > W) {
        return knapsackRec(val, wt, W, n-1);
    }
    else {
        return max(knapsackRec(val, wt, W, n-1), val[n-1] + knapsackRec(val, wt, W-wt[n-1], n-1));
    }
}


int knapsackDp(int val[], int wt[], int W, int n) {
    int dp[n+1][W+1]; 
    for(int i=0; i<=n; ++i) {
        for(int j=0; j<=W; ++j) {
            if(i==0 || j==0) {
                dp[i][j] = 0;
            }
            else if(wt[i-1] <= j) {
                dp[i][j] = max(dp[i-1][j], val[i-1] + dp[i-1][j-wt[i-1]]);
            }
            else {
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[n][W];
}

int main() {
    int val[] = {60, 100, 120};
    int wt[] = {10, 20, 30};
    int W = 50;
    int n = sizeof(val)/sizeof(val[0]);
    
    cout << knapsackDp(val, wt, W, n);
    long long a = 0;
    cout << max(0LL, a);
    return 0;
}

