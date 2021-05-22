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

void bubbleSort(vi &arr) {
    bool flag =  true;
    loop(0, arr.size()) {
        flag = false;
        loopB(0, arr.size()-1-i){
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = true; 
            }
        }
        if(!flag) {
            break;
        }
    }
}
int main() {
    vi arr = {4, 3, 2, 1};
    bubbleSort(arr);
    displayArr(arr);
    return 0;
}