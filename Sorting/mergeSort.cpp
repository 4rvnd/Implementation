#include <bits/stdc++.h>

using namespace std;

#define loop(a, b) for(int i = a; i < b; i++)
#define autoLoop(a, n) for(auto& a : n)
#define sze(x) (int)(x).size()

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

void insertArray(vi &nums) {
    int size, num;
    cin >> size;
    loop(0, size) {
        cin >> num;
        nums.push_back(num);
    }
}
void merge(vi &nums, int start, int mid, int end) {
    
}
void mergeSort(vi &nums, int first, int last) {
    if(first < last) {
        int mid = (first + last)/2;
        mergeSort(nums, 0, mid);
        mergeSort(nums, mid+1, last);

        merge(nums, first, mid, last);
    }
}

void displayArr(vi &nums) {
    autoLoop(i, nums) {
        cout << i << " ";
    }
}

main() {
    vi nums;
    insertArray(nums);
    mergeSort(nums, 0, sze(nums));
    displayArr(nums);
}