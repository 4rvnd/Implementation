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

int ternarySearch(vector<int> &nums, int first, int last, int findNum) {
    if (first <= last) {
        int mid1 = first + (last-first)/3, mid2 = last - (last-first)/3;
        if (findNum == nums[mid1])
            return mid1;
        else if(findNum == nums[mid2]) 
            return mid2;
        else if (findNum < nums[mid1]) {
            return ternarySearch(nums, 0, mid1-1, findNum);
        }
        else if (findNum > nums[mid1] && findNum < nums[mid2]) {
            return ternarySearch(nums, mid1+1, mid2-1, findNum);
        }
        else if (findNum > nums[mid2]){
            return ternarySearch(nums, mid2+1, nums.size(), findNum);
        }
    }
    else
        return -1;
}

main() {
    vector <int> nums;
    int findNum;
    insertArray(nums);
    cin >> findNum;
    int first = 0, last = nums.size()-1;
    int ret = ternarySearch(nums, first, last, findNum);
    if (ret == -1) 
        cout << "not found";
    else
        cout << "element found at " << ret << " position";
}