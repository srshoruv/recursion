#include <iostream>
#include <vector>
using namespace std;

int firstOccur(vector<int> arr, int target, int i) {
    if (i == arr.size()) {
        return -1;
    }
    if (arr[i]==target) {
        return i;
    }

    return firstOccur(arr,target, i+1);
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,7,7,7,7,8,9,0};
    cout << firstOccur(arr,7,0);
}