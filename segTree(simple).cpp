#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;
typedef vector<int> vi; 


int n = 1, t[];

void build(int a[], int v, int tl=0, int tr=n-1) {
    if(tl == tr) {
        t[v] = a[tl];
    } else {
        int tm = (tl + tr) / 2;
        build(a, v*2 , tl, tm);
        build(a, v*2 + 1 , tm+1, tr);
        t[v] = t[v*2] + t[v*2 + 1];
    }
}

int sum(int v, int tl, int tr, int l, int r) {
    if(l>r) return 0;
    if(tl == l && tr == r) return t[v];
    int tm = (tl + tr) / 2;
    return sum(v*2, tl, tm, l, min(r, tm)) + sum(v*2+1, tm+1, tr, max(l, tm+1), r);
}

void update(int v, int tl, int tr, int pos, int new_val) {
    if(tl == tr) t[v] = new_val;
    else {
        int tm = (tl + tr) / 2;
        if(pos<= tm) {
            update(v*2, tl, tm, pos, new_val);
        }
        else {
            update(v*2+1, tm+1, tr, pos, new_val);
        }
        t[v] = t[v*2] + t[v*2 + 1];
    }
}

int main () {
    vi a;
    cout << "yes";
    return 0;
}