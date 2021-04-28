#include <bits/stdc++.h>

using namespace std;

#define loop(a, b) for(int i = a; i < b; i++)
#define loopB(a, b) for(int j = a; j < b; j++)
#define autoLoop(a, n) for(auto& a : n)
#define sze(x) (int)(x).size()

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

void displayArr(vi &nums) {
    autoLoop(i, nums) {
        cout << i << " ";
    }
}

void insertionSort(vi &arr) {
    loop(1, arr.size()) {
        int j=i-1, key = arr[i];
        while(j>=0 && key<arr[j]) {
            arr[j+1] = arr[j];
            arr[j] = key;
            j--;
        }
    }
}
int main() {
    vi arr = {4, 3, 2, 1};
    insertionSort(arr);
    displayArr(arr);
    return 0;
}