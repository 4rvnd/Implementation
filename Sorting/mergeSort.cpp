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
void merge(vi &nums, int start, int mid, int end) {
    vi l, m;
    int n1 = mid-start+1, n2 = end - mid;
    loop(0, n1) {
        l.push_back(nums[start+i]);
    }
    loopB(0, n2) {
        m.push_back(nums[mid+1+j]);
    }
    int i=0, j=0, k=start;
    while(i<n1 && j<n2) {
        if (l[i] <= m[j]) {
            nums[k] = l[i];
            i++;
        }
        else{
            nums[k] = m[j];
            j++;
        }
        k++;
    }
    while(i < n1) {
        nums[k] = l[i];
        i++; k++;
    }
    while(j < n2) {
        nums[k] = m[j];
        j++; k++;
    }
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
    mergeSort(nums, 0, sze(nums)-1);
    displayArr(nums);
}