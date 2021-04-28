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

int minEle(vi &nums, int a) {
    int min = a;
    loop(a+1, sze(nums)) {
        if(nums[i] < nums[min]) {
            min = i;
        }
    }
    return min;
}

void selectionSort(vi &nums) {
    loop(0, sze(nums)) {
        int min = minEle(nums, i);
        if (min != i) {
            int temp = nums[i];
            nums[i] = nums[min];
            nums[min] = temp;
        }
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
    selectionSort(nums);
    displayArr(nums);
}