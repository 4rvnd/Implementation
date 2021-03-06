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

int linearSearch(vector<int> &nums, int findNum) {
    for (int i=0; i<nums.size(); i++) {
        if (nums[i] == findNum) {
            return i;
            break;
        }
    }
    return -1;
}

main() {
    vector <int> nums;
    int findNum;
    insertArray(nums);
    cin >> findNum;
    int ret = linearSearch(nums, findNum);
    if (ret == -1) {
        cout << "not found";
    }
    else {
        cout << "element found at " << ret << " position";
    }
}