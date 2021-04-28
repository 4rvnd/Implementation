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

void merge(vi &arr, int first, int mid, int last) {
    vi l, m;
    int n1= mid-first+1, n2 = last-mid;
    loop(0, n1) l.push_back(arr[first+i]);
    loop(0, n2) m.push_back(arr[mid+1+i]);
    int i=0, j=0, k=first;
    while(i<n1 && j<n2) {
        if(l[i] <= m[j]) {
            arr[k] = l[i];
            i++;
        }
        else{
            arr[k] = m[j];
            j++;
        }
        k++;
    }
    while(i<n1) {
        arr[k] = l[i];
        i++; k++;
    }
    while(j<n2) {
        arr[k] = m[j];
        j++; k++;
    }
}
void mergeSort(vi &arr, int first, int last) {
    if(first < last) {
        int mid = (first+last)/2;

        mergeSort(arr, first, mid);
        mergeSort(arr, mid+1, last);
        merge(arr, first, mid, last);
    }
}
int main() {
    vi arr = {4, 3, 2, 1};
    int l=0, h=3;
    mergeSort(arr, l, h);
    displayArr(arr);
    return 0;
}