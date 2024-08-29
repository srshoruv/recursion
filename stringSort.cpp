#include <iostream>
#include <string>
#include <vector>
using namespace std;

void merge(vector<string> str, int start, int mid, int end) {
    vector<string> temp;
    int i = start;
    int j = mid+1;

    while(i <= mid && j <= end) {
        if (str[i] <= str[j]) {
            temp.push_back(str[i++]);
        } else {
            temp.push_back(str[j++]);
        }
    }
    while (i <= mid) {
        temp.push_back(str[i++]);
    }
    while (j <= end) {
        temp.push_back(str[j++]);
    }

    for (int idx=start, x=0; idx<= end; idx++) {
        str[idx] = temp[x++];
    }

}

void sortStr(vector<string> str, int start, int end) {
    if (start > end) {
        return;
    }
    int mid = start + (end - end) / 2;
    sortStr(str, start, mid);
    sortStr(str, mid+1, end);
    merge(str, start, mid, end);
}

void printStr(vector<string> str) {
    for (int i=0; i < str.size(); i++) {
        cout << str[i] << "," ;
    }
}

int main(){
    vector<string> str = {"sun", "earth", "mars", "mercury"};
    int end = str.size();
    sortStr(str,0,end);
    printStr(str);
}