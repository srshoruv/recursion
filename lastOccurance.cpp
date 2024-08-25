#include <iostream>
#include <vector>
using namespace std;

int lastOccur(vector<int> arr, int target, int n) {
    if (n == 0) {
        return -1;
    }
    if (arr[n]==target) {
        return n;
    }

    return lastOccur(arr,target, n-1);
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,7,7,7,7,8,9,0};
    int n = arr.size();
    cout << lastOccur(arr,7,n);
}