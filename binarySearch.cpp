#include <iostream>
#include <vector>
using namespace std;

int search(vector<int> arr, int start, int end, int key) {
    
    int mid = (start + end) / 2;
    if (start > end) {
        return -1;
    }
    if (arr[mid]==key) {
        return mid;
    } else if (arr[mid] > key) {
        return search(arr, start, mid-1, key);
    } else {
        return search(arr, mid+1, end, key);
    }
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7};
    int key = 7;
    int start = 0;
    int end = arr.size() - 1;
    cout << search(arr, start, end, key);
}