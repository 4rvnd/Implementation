#include <bits/stdc++.h>

using namespace std;

#define loop(i, a, b) for(int i = a; i < b; i++)
#define autoLoop(a, n) for(auto& a : n)
#define sze(x) (int)(x).size()

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

void insertArray(vector<int> &nums) {
    int size, num;
    cin >> size;
    for (int i=0; i<size; i++) {
        cin >> num;
        nums.push_back(num);
    }
}

int binarySearch(vector<int> &nums, int first, int last, int findNum) {
    if (last >= first) {
        int mid = (first + last)/2;
        if (findNum == nums[mid])
            return mid;
        else if (findNum < nums[mid]) {
            return binarySearch(nums, 0, mid-1, findNum);
        }
        else if (findNum > nums[mid]) {
            return binarySearch(nums, mid+1, nums.size(), findNum);
        }
    }
    else {
        return -1;
    }
}

main() {
    vector <int> nums;
    int findNum;
    insertArray(nums);
    cin >> findNum;
    int first = 0, last = nums.size()-1;
    int ret = binarySearch(nums, first, last, findNum);
    if (ret == -1) 
        cout << "not found";
    else
        cout << "element found at " << ret << " position";
}