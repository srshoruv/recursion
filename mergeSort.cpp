#include <iostream>
#include <vector>
using namespace std;

void merge(int *arr, int start, int mid, int end) {
    vector<int> temp;
    int i=start;
    int j=mid+1;
    while (i <= mid && j <= end) {
        if (arr[i]  <= arr[j]){
            temp.push_back(arr[i++]);
        } else {
            temp.push_back(arr[j++]);
        }
    }
    while (i <= mid) {
            temp.push_back(arr[i++]);
        }
    while (j <= end) {
            temp.push_back(arr[j++]);
        }
    
    //vector to original array
    for (int idx = start, x=0; idx <= end; idx++) {
        arr[idx] = temp[x++];
    }

}

void mergeSort (int *arr, int start, int end) {
    if (start >= end) {
        return;
    }
    int mid = start + (end - start) / 2;
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);
    merge(arr,start,mid,end);
}

void printArr(int *arr, int n) {
    for (int i=0; i<=n; i++) {
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[6] = {2,5,1,8,4,2};
    int n = 6;

    mergeSort(arr,0,n-1);
    printArr(arr,n-1);
}