#include <iostream>
#include <vector>

using namespace std;

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

int min(int a, int b)
{
    return (a < b ? a : b);
}

int exponentialSearch(vector<int> &nums, int findNum) {
    int i = 1, size = nums.size()-1;
    if (nums[0] == findNum)
        return 0;
	while (i < size && nums[i] <= findNum) 
		i = i*2;
	return binarySearch(nums, i/2, min(i, size), findNum); 
}

main() {
    vector <int> nums;
    int findNum;
    insertArray(nums);
    cin >> findNum;
    int first = 0, last = nums.size()-1;
    int ret = exponentialSearch(nums, findNum);
    if (ret == -1) 
        cout << "not found";
    else
        cout << "element found at " << ret << " position";
}