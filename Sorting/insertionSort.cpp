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

void insertionSort(vi &nums) {
    loop(1, sze(nums)) {
        int j = i - 1, key = nums[i];
        while(j >= 0 && nums[j] > key) {
            nums[j+1] = nums[j];
            j--;
        }
        nums[j+1] = key;
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
    insertionSort(nums);
    displayArr(nums);
}