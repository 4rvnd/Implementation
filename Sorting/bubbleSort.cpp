#include <bits/stdc++.h>

using namespace std;

#define loop(a, b) for(int i = a; i < b; i++)
#define loopB(a, b) for(int j = a; j < b; j++)
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

void bubbleSort(vi &nums) {
    bool swapped;
    loop(0, sze(nums)) {
        swapped = false;
        loopB(0, sze(nums)-i-1) {
            if(nums[j] > nums[j+1]) {
                int temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
                swapped = true;
            }
        }
        if (swapped == false) {
            break;
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
    bubbleSort(nums);
    displayArr(nums);
}