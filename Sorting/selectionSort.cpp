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

void selectionSort(vi &arr) {
    loop(0, arr.size()) {
        int min = arr[i];
        int idx = i;
        loopB(i+1, arr.size()) {
            if(min>arr[j]) {
                min = arr[j];
                idx = j;
            }
        }
        int temp = arr[i];
        arr[i] = min;
        arr[idx] = temp;
    }
}
int main() {
    vi arr = {4, 3, 2, 1};
    selectionSort(arr);
    displayArr(arr);
    return 0;
}