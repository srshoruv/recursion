#include <iostream>
using namespace std;

int partition(int arr[], int start, int end) {
    int i = start - 1;
    int pivet = arr[end];

    for (int j=start; j < end; j++){
        if (arr[j] < pivet) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    i++;
    swap(arr[i], arr[end]);
    return i;
}

void quickSort(int *arr, int start, int end) {
    if (start >= end) {
        return;
    }
    int pivetIdx = partition(arr,start,end);
    quickSort(arr,start,pivetIdx-1);
    quickSort(arr, pivetIdx+1, end);
}

void printArr(int *arr, int n) {
    for (int i=0; i<=n; i++) {
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[6] = {2,5,1,8,4,2};
    int n = 6;
    quickSort(arr,0, n-1);
    printArr(arr,n-1);
}